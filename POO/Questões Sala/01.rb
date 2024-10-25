class Numeros
    attr_reader :num1, :num2, :num3
  
    def initialize(num1, num2, num3)
      @num = [num1, num2, num3]
    end
  
    def maior
      maior = @num[0]
      for i in 0..2 do
        if maior <= @num[i]
          maior = @num[i]
        end                
      end
      puts "Maior: #{maior}"
    end

    def menor
      menor = @num[0]
      for i in 0..2 do
        if menor >= @num[i]
          menor = @num[i]
        end                
      end
      puts "Menor: #{menor}"
    end
    
    def produto
      prod = @num[0] * @num[1] * @num[2]
      puts "Produto: #{prod}"
    end
      
    def media
      med = (@num[0] + @num[1] + @num[2]) / 3
      puts "Media: #{med}"
    end
      
end
  
def main 
    puts "Escreva o valor do primeiro número: "
    num1 = gets.chomp.to_i
    puts "Escreva o valor do segundo número: "
    num2 = gets.chomp.to_i
    puts "Escreva o valor do terceiro número: "
    num3 = gets.chomp.to_i
  
    nums = Numeros.new(num1, num2, num3)
    nums.maior
    nums.menor
    nums.produto
    nums.media
  end  
    
main
    