class Funcionario 
    def initialize(cpf, matricula, nome, endereco, tel, idade, nacio, sal_base, inss)
        @cpf = cpf.to_i
        @matricula = matricula.to_i
        @nome = nome.to_s
        @endereco = endereco.to_s
        @tel = tel.to_i
        @idade = idade.to_i
        @nacio = nacio.to_s
        @sal_base = sal_base.to_f
        @inss = inss.to_f
    end

    def CalcSal 

    end
end