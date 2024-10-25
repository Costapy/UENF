class Calculadora:
    def soma(self, *args):
        return sum(args)
    
    def subtrair(self, *args):
        result = args[0]
        for i in args[1:]:
            result -= i
        return result
    
    def multiplicar(self, *args):
        result = args[0]
        for i in args[1:]:
            result *= i
        return result
    
    def dividir(self, *args):
        result = args[0]
        for i in args[1:]:
            result /= i
        return result

calc = Calculadora()

print(calc.soma(2, 8, 5))
print(calc.subtrair(2, 8, 5))
print(calc.multiplicar(2, 8, 5))
print(calc.dividir(2, 8, 5))