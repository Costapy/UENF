class Circ
    attr_reader :raio

    def initialize(raio)
        @raio = raio
    end

    def diam
        diam = 2*@raio
        puts "Diametro: #{diam}"
    end

    def area 
        area = 3.14*@raio**2
        puts "Area: #{area}" 
    end

    def compr
        compr = 2*3.14*@raio
        puts "Comprimento: #{compr}"
    end
end

def main
    puts "Raio: "
    raio = gets.chomp.to_i

    circ = Circ.new(raio)
    
    circ.diam
    circ.area
    circ.compr
end

main