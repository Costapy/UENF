class JogadorDeFutebol
    attr_reader :nome, :sobrenome, :num, :posicao
  
    def initialize(nome, sobrenome, num)
        @nome = nome
        @sobrenome = sobrenome
        @num = num
        @posicao = posicao()
    end

    def name
        puts "#{sobrenome} #{nome}".capitalize()
    end

    def posicao
        if num >= 1 && num <= 5
            @posicao = "Zagueiro" 

        elsif num >= 6 && num <= 10
            @posicao = "Meia"

        else
            @posicao = "Atacante"
        end
    end
    
    def jogadores
        puts "#{nome} #{num} #{posicao}"
    end
end

def cria_jogador()
    puts "Nome do jogador: "
    nome = gets.chomp

    puts "Sobrenome: "
    sobrenome = gets.chomp

    while true
        puts "Número da camisa: "
        num = gets.chomp.to_i
        if num > 0
            break
        end
    end
    
    jogador = JogadorDeFutebol.new(nome, sobrenome, num)
    return jogador

end

def main 
    time = []

    for i in 0 ..2
        time[i] = cria_jogador
    end

    puts "Time do Flamengo (maior do mundo):"
    time.each do |jogador|
        puts jogador.jogadores
    end
end 

main

