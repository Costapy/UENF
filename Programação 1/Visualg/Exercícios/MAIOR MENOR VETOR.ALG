Algoritmo "Maior Menor Vetor"

Var

   vet: vetor[1..12] de inteiro
   i, j, ma, me: inteiro


Inicio

   para i de 1 at� 12 fa�a
      leia(vet[i])
      se i = 1 ent�o
         ma <- vet[i]
         me <- vet [i]
      sen�o
         se vet[i] > ma ent�o
            ma <- vet[i]
         fimse
         se vet[i] < me ent�o
            me <- vet[i]
         fimse
      fimse
   fimpara
   escreval("O maior valor foi: ", ma)
   escreval("O menor valor foi: ", me)

Fimalgoritmo