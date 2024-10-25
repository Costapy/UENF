Algoritmo "Reta em R2"

Var

   pontos: vetor[1..2, 1..2] de inteiro
   vet: vetor[1..3] de inteiro

   i, j, d: inteiro

Inicio
   para i de 1 até 2 faça
      para j de 1 até 2 faça
         se j = 1 então
            escreva("Coordenada X do ponto: ")
         senão
            escreva("Coordena Y do ponto: ")
         fimse
         leia(pontos[i, j])
      fimpara
   fimpara

   vet[1] <- pontos[1,1] - pontos[2,1]
   vet[2] <- pontos[1,2] - pontos[2,2]
   vet[3] <- 0
   
   vet[3] <- vet[1]
   vet[1] <- -vet[2]
   vet[2] <- vet[3]
   
   d <- (pontos[1,1]*vet[1]) + (pontos[1,2]*vet[2])
   
   escreval(vet[1],"X +", vet[2], "Y = ", d)

Fimalgoritmo