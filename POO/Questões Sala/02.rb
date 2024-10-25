class Nums
    attr_reader :num1, :num2
  
    def initialize(num1, num2)
      @num1 = num1
      @num2 = num2
    end
  
    def mult
      if (num1 % num2).zero?
        puts "É múltiplo"
      else
        puts "Não é múltiplo"
      end
    end
  end
  
  def main
    puts "Primeiro número: "
    num1 = gets.chomp.to_i
  
    puts "Segundo número: "
    num2 = gets.chomp.to_i
  
    multiplo = Nums.new(num1, num2)
    multiplo.mult
  end
  
  main
  