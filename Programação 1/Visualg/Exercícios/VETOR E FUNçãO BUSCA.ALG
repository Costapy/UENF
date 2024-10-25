Algoritmo "Vetor e Função Busca"

Var

   vet: vetor[1..100] de inteiro
   i, val: inteiro

função busca(val: inteiro): inteiro
inicio
   para i de 1 até 100 faça
      se vet[i] = val então
         retorne(i)
         interrompa
      fimse
      retorne(-1)
   fimpara
fimfunção

Inicio

   para i de 1 até 100 faça
      vet[i] <- randi(100)+1
   fimpara
   escreva("Digite um valor para ser encontrado: ")
   leia(val)
   escreval(busca(val))

Fimalgoritmo