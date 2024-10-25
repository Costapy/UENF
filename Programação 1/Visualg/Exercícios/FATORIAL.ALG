Algoritmo "Fatorial"

Var
num, fat: inteiro

Inicio
escreva("Escreva um valor para ter o seu fatorial calculado: ")
leia(num)
fat <- num
enquanto (num > 1) faça
num <- num - 1
fat <- fat*num
fimenquanto
escreva("O fatorial vale: ", fat)

Fimalgoritmo