class Calculo:
    def divisao(n1, n2):
        try:
            return n1/n2
        except:
            return "Não é possível dividir"
        
print(Calculo.divisao(4, 2))
print(Calculo.divisao(4, 0))