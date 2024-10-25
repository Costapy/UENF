class Figura 
    attr_reader :nome

    def initialize(nome)
        @nome = nome
    end

    def obterArea
        puts "Calculo generico de area"
    end
end

class Quadrado < Figura
    attr_reader :lado

    def initialize(lado)
        super("Quadrado")
        @lado = lado
    end

    def obterArea
        puts "Area = #{lado**2}"
    end
end

class Ret < Figura
    attr_reader :base, :altura 

    def initialize(base, altura)
        super("Retângulo")
        @base = base
        @altura = altura 
    end

    def obterArea 
        puts "Area = #{base*altura}"
    end
end

class Tri < Figura
    attr_reader :base, :altura

    def initialize(base, altura)
        super("Triângulo")
        @base = base
        @altura = altura 
    end

    def obterArea
        puts "Area = #{base*altura/2}"
    end
end

class Circ < Figura
    attr_reader :raio

    def initialize(raio)
        super("Círculo")
        @raio = raio
    end

    def obterArea
        puts "Area = #{3.14*raio**2}"
    end
end

quadrado = Quadrado.new(4)
retang = Ret.new(3, 4)
triang = Tri.new(2, 10)
circu = Circ.new(2)

quadrado.obterArea
retang.obterArea
triang.obterArea
circu.obterArea
