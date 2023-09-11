N = gets.to_i
a = gets.split.map(&:to_i)

ans = 0
while a.all?(&:even?)
  a = a.map { |n| n / 2}
  ans += 1
end

puts ans

