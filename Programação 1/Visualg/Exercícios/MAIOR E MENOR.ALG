Algoritmo "Maior e Menor"

Var
ma, me, num, c: inteiro


Inicio
para c de 1 at� 3 fa�a
escreva("Escreva um n�mero: ")
leia(num)
se c = 1 ent�o
ma <- num
me <- num
sen�o
se num > ma ent�o
ma <- num
fimse
se num < me ent�o
me <- num
fimse
fimse
fimpara
escreval("O maior valor foi: ", ma)
escreval("O menor valor foi: ", me)
Fimalgoritmo