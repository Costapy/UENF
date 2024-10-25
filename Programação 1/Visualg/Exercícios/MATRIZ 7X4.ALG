Algoritmo "Matriz 7x4"

Var

   mat: vetor[1..7, 1..4] de real
   i, j : inteiro


Inicio

   para i de 1 até 7 faça
      para j de 1 até 4 faça
         escreva("Escreva um valor para a posição [",i, ",", j, " ]: ")
         leia(mat[i, j])
      fimpara
   fimpara

   para i de 1 até 7 faça
      para j de 1 até 4 faça
         escreva("[", mat[i, j], " ]")
      fimpara
      escreval()
   fimpara


Fimalgoritmo