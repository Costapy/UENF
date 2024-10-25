Algoritmo "Sort Vetor"

Var

   vet: vetor[1..10] de inteiro
   i, j, k, me, posi : inteiro

procedimento sort()

inicio

   j <- 0
   para i de 1 até 10 faça
      j <- j + 1
      para k de 1 até 10 faça
         se j = k então
            me <- vet[k]
            posi <- k
         senão
            se vet[k] < me então
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
   para i de 1 até 10 faça
      vet[i] <- randi(10)+1
   fimpara
   sort()


Fimalgoritmo