#!/usr/bin/env ruby

DECL = 'static __host__ __device__ __inline__'

ITYPES = [
  'char2',  'char3',  'char4',  'uchar2',  'uchar3',  'uchar4',
  'short2', 'short3', 'short4', 'ushort2', 'ushort3', 'ushort4',
  'int2',   'int3',   'int4',   'uint2',   'uint3',   'uint4',
  'long2',  'long3',  'long4',  'ulong2',  'ulong3',  'ulong4'
]

FTYPES = [
  'float2', 'float3', 'float4', 'double2'
]

TYPES = ITYPES + FTYPES

COMPS = [ 'x', 'y', 'z', 'w' ]

def comps(n)
  return COMPS[0..n-1]
end

def gen_comps(n, &block)
  (0..n-1).each do |c|
    str = yield(COMPS[c])
    str = str +', ' if c != (n-1)
    print str
  end
end

def gen_binop(types, op, with_assignment=true)
  types.each do |t|
    scalar, n = t.match(/([a-z]+)([0-9])/)[1..2]
    n = n.to_i

    # vec op vec
    puts "#{DECL} #{t} operator #{op} (const #{t} & a, const #{t} & b)"
    puts "{"
    print "    return make_#{t}("
    gen_comps(n) { |c| "a.#{c}#{op}b.#{c}" }
    puts ");"
    puts "}"
    puts ""

    # scalar op vec
    puts "#{DECL} #{t} operator #{op} (const #{scalar} & a, const #{t} & b)"
    puts "{"
    print "    return make_#{t}("
    gen_comps(n) { |c| "a#{op}b.#{c}" }
    puts ");"
    puts "}"
    puts ""

    # vec op scalar
    puts "#{DECL} #{t} operator #{op} (const #{t} & a, const #{scalar} & b)"
    puts "{"
    print "    return make_#{t}("
    gen_comps(n) { |c| "a.#{c}#{op}b" }
    puts ");"
    puts "}"
    puts ""

    if with_assignment
      # vec op= vec
      puts "#{DECL} #{t} & operator #{op}= (#{t} & a, const #{t} & b)"
      puts "{"
      comps(n).each { |c| puts "    a.#{c} #{op}= b.#{c};" }
      puts "    return a;"
      puts "}"
      puts ""

      # vec op= scalar
      puts "#{DECL} #{t} & operator #{op}= (#{t} & a, const #{scalar} & b)"
      puts "{"
      comps(n).each { |c| puts "    a.#{c} #{op}= b;" }
      puts "    return a;"
      puts "}"
      puts ""
    end
  end
end


def gen_unop(types, op)
  types.each do |t|
    scalar, n = t.match(/([a-z]+)([0-9])/)[1..2]
    n = n.to_i

    # op vec
    puts "#{DECL} #{t} operator #{op} (const #{t} & a)"
    puts "{"
    print "    return make_#{t}("
    gen_comps(n) { |c| "#{op}a.#{c}" }
    puts ");"
    puts "}"
    puts ""
  end
end


def gen_relop(types, op)
  types.each do |t|
    scalar, n = t.match(/([a-z]+)([0-9])/)[1..2]
    n = n.to_i

    # vec op vec
    puts "#{DECL} #{t} operator #{op} (const #{t} & a, const #{t} & b)"
    puts "{"
    print "    return make_#{t}("
    gen_comps(n) { |c| "a.#{c}#{op}b.#{c} ? -1 : 0" }
    puts ");"
    puts "}"
    puts ""

    # scalar op vec
    puts "#{DECL} #{t} operator #{op} (const #{scalar} & a, const #{t} & b)"
    puts "{"
    print "    return make_#{t}("
    gen_comps(n) { |c| "a#{op}b.#{c} ? -1 : 0" }
    puts ");"
    puts "}"
    puts ""

    # vec op scalar
    puts "#{DECL} #{t} operator #{op} (const #{t} & a, const #{scalar} & b)"
    puts "{"
    print "    return make_#{t}("
    gen_comps(n) { |c| "a.#{c}#{op}b ? -1 : 0" }
    puts ");"
    puts "}"
    puts ""
  end
end

def gen_unfn(types, name)
  types.each do |t|
    scalar, n = t.match(/([a-z]+)([0-9])/)[1..2]
    n = n.to_i

    # op vec
    puts "#{DECL} #{t} #{name}(const #{t} & a)"
    puts "{"
    print "    return make_#{t}("
    gen_comps(n) { |c| "#{name}(a.#{c})" }
    puts ");"
    puts "}"
    puts ""
  end
end

puts <<HERE
#pragma once

typedef unsigned char uchar;

#{DECL} float fract(const float x)
{
  return x - floorf(x);
}

#{DECL} double fract(const double x)
{
  return x - floor(x);
}

HERE

gen_unop(TYPES,  "-")
gen_unop(ITYPES, "~")
gen_unop(ITYPES, "!")

gen_binop(TYPES, "+")
gen_binop(TYPES, "-")
gen_binop(TYPES, "*")
gen_binop(TYPES, "/")
gen_binop(ITYPES, "%")
gen_binop(ITYPES, "&")
gen_binop(ITYPES, "|")
gen_binop(ITYPES, "^")
gen_binop(ITYPES, "<<")
gen_binop(ITYPES, ">>")

gen_binop(ITYPES, "&&", false)
gen_binop(ITYPES, "||", false)

gen_relop(ITYPES, "==")
gen_relop(ITYPES, "!=")
gen_relop(ITYPES, ">")
gen_relop(ITYPES, "<")
gen_relop(ITYPES, ">=")
gen_relop(ITYPES, "<=")


gen_unfn(FTYPES, "fract")

