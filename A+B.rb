if __FILE__ == $0
  num = 1
  sum = 0
  while num >= 0 do
    num = gets.chomp
    num = /[\.].*\d/.match(num).to_s
    num = /\d/.match(num).to_s.to_i
    sum = sum + num
  end
  puts sum
end
