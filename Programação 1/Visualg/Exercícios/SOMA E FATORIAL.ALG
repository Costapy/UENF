Algoritmo "Soma e Fatorial"

Var
num1, num2, oper: inteiro
função mult(a: inteiro; b: inteiro): inteiro
var
c, d: inteiro
inicio
para c de 1 até b faça
d <- d + a
fimpara
retorne(d)
fimfunção

função fat(a: inteiro): inteiro
var
c, d, result: inteiro
inicio
result <- a
para c de a-1 até 1 passo -1 faça
result <- result + mult(result, c-1)
fimpara
retorne(result)
fimfunção


Inicio
escreval("Escolha uma operação para ser realizada: ")
escreval("[1] Multiplicação")
escreval("[2] Fatorial")
leia(oper)
escolha(oper)
caso 1
escreva("Escreva um número: ")
leia(num1)
escreva("Escreva outro número: ")
leia(num2)
escreva(mult(num1, num2))
caso 2
escreva("Escolha um número: ")
leia(num1)
escreva(fat(num1))
fimescolha

Fimalgoritmo