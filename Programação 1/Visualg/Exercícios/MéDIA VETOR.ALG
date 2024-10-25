Algoritmo "Média Vetor"

Var

   vet : vetor[1..10] de inteiro
   i, soma : inteiro
   media: real


Inicio

   soma <- 0
   para i de 1 até 10 faça
      leia(vet[i])
      soma <- soma + vet[i]
   fimpara
   media <- soma/10
   escreva("A média dos 10 valores é: ", media)
Fimalgoritmo