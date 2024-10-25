Algoritmo "Soma Fibonacci N"

Var
n, d, t, fat, k: inteiro
soma, divi: real


Inicio
escreva("Deseja realizar a operação para quantos termos? ")
leia(t)
para n de 1 até t faça
d <- n*2
fat <- 1
para k de d até 1 passo -1 faça
fat <- (fat*k)
fimpara
se (n%2) = 0 então
soma <- soma + (n/fat)
senão
soma <- soma - (n/fat)
fimse
fimpara
escreva("O resultado da expressão para", t, " termos é igual a : ", soma)


Fimalgoritmo