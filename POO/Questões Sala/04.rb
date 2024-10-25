class Conta_Bancaria
    attr_reader :saldo

    def initialize(sal)
        if sal < 0
            @saldo = 0
        else
            @saldo = sal
        end
    end

    def credito(cred) 
        @saldo += cred
    end

    def debito(deb)
        if deb > @saldo
            puts "Não é possível realizar a operação"
        else
            @saldo = @saldo - deb
        end
    end

    def getSaldo 
        puts "Saldo: R$#{saldo}"
    end
end

def main
    puts "Saldo: "
    saldo1 = gets.chomp.to_f
    conta1 = Conta_Bancaria.new(saldo1)

    while true
        puts "======================="
        puts "1) Crédito"
        puts "2) Débito"
        puts "3) Mostrar Saldo"
        puts "4) Sair"
        op = gets.chomp.to_i

        if op == 1
            puts "Valor: "
            cred = gets.chomp.to_f
            conta1.credito(cred)
        elsif op == 2
            puts "Valor: "
            deb = gets.chomp.to_f
            conta1.debito(deb)
        elsif op == 3
            conta1.getSaldo
        else  
            break
        end
    end

end

main