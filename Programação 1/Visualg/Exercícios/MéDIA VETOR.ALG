Algoritmo "M�dia Vetor"

Var

   vet : vetor[1..10] de inteiro
   i, soma : inteiro
   media: real


Inicio

   soma <- 0
   para i de 1 at� 10 fa�a
      leia(vet[i])
      soma <- soma + vet[i]
   fimpara
   media <- soma/10
   escreva("A m�dia dos 10 valores �: ", media)
Fimalgoritmo