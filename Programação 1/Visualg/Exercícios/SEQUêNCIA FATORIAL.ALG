Algoritmo "Sequência Fatorial"

Var
n, d, fat, k: inteiro
divi, soma: real


Inicio
para n de 1 até 5 faça
d <- n*2
fat <- d
para k de 1 até d-1 faça
fat <- fat*k
fimpara
se (n % 2) = 0 então
soma <- soma + (n/fat)
senão
soma <- soma - (n/fat)
fimse
fimpara
escreva("O resultado da expressão é: ", soma)


Fimalgoritmo

