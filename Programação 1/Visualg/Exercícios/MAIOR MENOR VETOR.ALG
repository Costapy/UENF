Algoritmo "Maior Menor Vetor"

Var

   vet: vetor[1..12] de inteiro
   i, j, ma, me: inteiro


Inicio

   para i de 1 até 12 faça
      leia(vet[i])
      se i = 1 então
         ma <- vet[i]
         me <- vet [i]
      senão
         se vet[i] > ma então
            ma <- vet[i]
         fimse
         se vet[i] < me então
            me <- vet[i]
         fimse
      fimse
   fimpara
   escreval("O maior valor foi: ", ma)
   escreval("O menor valor foi: ", me)

Fimalgoritmo