Algoritmo "Soma Fibonacci N"

Var
n, d, t, fat, k: inteiro
soma, divi: real


Inicio
escreva("Deseja realizar a opera��o para quantos termos? ")
leia(t)
para n de 1 at� t fa�a
d <- n*2
fat <- 1
para k de d at� 1 passo -1 fa�a
fat <- (fat*k)
fimpara
se (n%2) = 0 ent�o
soma <- soma + (n/fat)
sen�o
soma <- soma - (n/fat)
fimse
fimpara
escreva("O resultado da express�o para", t, " termos � igual a : ", soma)


Fimalgoritmo