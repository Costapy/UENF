Algoritmo "Quociente e Resto"

Var
a, b, c: inteiro
fun��o res_quo(a: inteiro; b: inteiro; c: inteiro): inteiro
var
res, quo: inteiro

inicio
res <- a
enquanto res >= b fa�a
res <- res - b
quo <- quo + 1
fimenquanto
se c = 1 ent�o
retorne(res)
sen�o
retorne(quo)
fimse
fimfun��o

Inicio
escreva("Digite um n�mero: ")
leia(a)
escreva("Digite um divisor para esse n�mero: ")
leia(b)
c <- 1
escreva("O resto da divis�o vale", res_quo(a, b, c))
c <- 2
escreva(" e o quociente da divis�o vale", res_quo(a, b, c))


Fimalgoritmo