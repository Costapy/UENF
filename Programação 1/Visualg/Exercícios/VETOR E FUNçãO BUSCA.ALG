Algoritmo "Vetor e Fun��o Busca"

Var

   vet: vetor[1..100] de inteiro
   i, val: inteiro

fun��o busca(val: inteiro): inteiro
inicio
   para i de 1 at� 100 fa�a
      se vet[i] = val ent�o
         retorne(i)
         interrompa
      fimse
      retorne(-1)
   fimpara
fimfun��o

Inicio

   para i de 1 at� 100 fa�a
      vet[i] <- randi(100)+1
   fimpara
   escreva("Digite um valor para ser encontrado: ")
   leia(val)
   escreval(busca(val))

Fimalgoritmo