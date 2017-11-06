if __FILE__ == $0
  suma = gets.chomp
  a = /\d+ /.match(suma).to_s.to_i
  b = / +\d+/.match(suma).to_s.to_i
  suma = a + b
  puts suma
end
