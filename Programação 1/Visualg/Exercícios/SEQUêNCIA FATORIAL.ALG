Algoritmo "Sequ�ncia Fatorial"

Var
n, d, fat, k: inteiro
divi, soma: real


Inicio
para n de 1 at� 5 fa�a
d <- n*2
fat <- d
para k de 1 at� d-1 fa�a
fat <- fat*k
fimpara
se (n % 2) = 0 ent�o
soma <- soma + (n/fat)
sen�o
soma <- soma - (n/fat)
fimse
fimpara
escreva("O resultado da express�o �: ", soma)


Fimalgoritmo

