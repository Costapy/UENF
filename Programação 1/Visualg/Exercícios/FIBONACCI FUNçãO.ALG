Algoritmo "Fibonacci Fun��o"

Var
num, ant, atual, final: inteiro
fun��o fibo(a:inteiro; b: inteiro; c: inteiro): inteiro
var
d: inteiro
inicio
a <- 0
b <- 1
para c de 2 at� c fa�a
d <- a + b
a <- b
b <- d
fimpara
retorne(d)
fimfun��o

Inicio
escreva("Escreva a posi��o de um n�mero da sequ�ncia: ")
leia(num)
escreva(fibo(ant, atual, num))

Fimalgoritmo