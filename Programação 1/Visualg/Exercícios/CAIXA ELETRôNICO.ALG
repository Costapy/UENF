Algoritmo "Caixa Eletrônico"

Var
valor, nota, troco: inteiro

Inicio
escreva("Escreva um valor para ser sacado: R$")
leia(valor)
nota <- 100

enquanto valor <> 0 faça
troco <- 0
enquanto valor >= nota faça
valor <- valor - nota
troco <- troco + 1
fimenquanto
escreval(Troco, " Notas de", nota)
se nota = 100 então
nota <- 50
senão
se nota = 50 então
nota <- 20
senão
se nota = 20 então
nota <- 10
senão
se nota = 10 então
nota <- 5
senão
se nota = 5 então
nota <- 2
senão
se nota = 2 então
nota <- 1
fimse
fimse
fimse
fimse
fimse
fimse
fimenquanto
Fimalgoritmo