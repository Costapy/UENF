Algoritmo "Quociente e Resto"

Var
a, b, c: inteiro
função res_quo(a: inteiro; b: inteiro; c: inteiro): inteiro
var
res, quo: inteiro

inicio
res <- a
enquanto res >= b faça
res <- res - b
quo <- quo + 1
fimenquanto
se c = 1 então
retorne(res)
senão
retorne(quo)
fimse
fimfunção

Inicio
escreva("Digite um número: ")
leia(a)
escreva("Digite um divisor para esse número: ")
leia(b)
c <- 1
escreva("O resto da divisão vale", res_quo(a, b, c))
c <- 2
escreva(" e o quociente da divisão vale", res_quo(a, b, c))


Fimalgoritmo