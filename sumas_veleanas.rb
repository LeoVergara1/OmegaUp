cycles = gets.chomp
counter = 0

loop do
  counter = counter + 1
  list = Array.new
  list << gets.chomp
  if counter == cycles.to_i
    break
  end
end
