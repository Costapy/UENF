Algoritmo "Fibonacci Função"

Var
num, ant, atual, final: inteiro
função fibo(a:inteiro; b: inteiro; c: inteiro): inteiro
var
d: inteiro
inicio
a <- 0
b <- 1
para c de 2 até c faça
d <- a + b
a <- b
b <- d
fimpara
retorne(d)
fimfunção

Inicio
escreva("Escreva a posição de um número da sequência: ")
leia(num)
escreva(fibo(ant, atual, num))

Fimalgoritmo