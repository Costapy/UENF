Algoritmo "Sort Vetor"

Var

   vet: vetor[1..10] de inteiro
   i, j, k, me, posi : inteiro

procedimento sort()

inicio

   j <- 0
   para i de 1 at� 10 fa�a
      j <- j + 1
      para k de 1 at� 10 fa�a
         se j = k ent�o
            me <- vet[k]
            posi <- k
         sen�o
            se vet[k] < me ent�o
               me <- vet[k]
               posi <- k
            fimse
         fimse
      fimpara
      vet[posi] <- vet[j]
      vet[j] <- me
   fimpara

fimprocedimento

Inicio
   para i de 1 at� 10 fa�a
      vet[i] <- randi(10)+1
   fimpara
   sort()


Fimalgoritmo