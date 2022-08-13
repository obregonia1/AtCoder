n = gets.to_i
as = gets.split.map(&:to_i)
hash = {}
n.times do |i|
  hash[i + 1] = as[i]
end
count = 0
combi = []
n.times do |i|
  combi << [{(i + 1) => hash[i + 1]}, ]
end
