Algoritmo "Maior e Menor"

Var
ma, me, num, c: inteiro


Inicio
para c de 1 até 3 faça
escreva("Escreva um número: ")
leia(num)
se c = 1 então
ma <- num
me <- num
senão
se num > ma então
ma <- num
fimse
se num < me então
me <- num
fimse
fimse
fimpara
escreval("O maior valor foi: ", ma)
escreval("O menor valor foi: ", me)
Fimalgoritmo