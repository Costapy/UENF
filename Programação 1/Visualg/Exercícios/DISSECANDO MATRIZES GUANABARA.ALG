Algoritmo "Dissecando Matrizes Guanabara"

Var
   mat: vetor[1..4, 1..4] de inteiro

   i, k, op: inteiro


Inicio
   para i de 1 até 4 faça
      para k de 1 até 4 faça
         escreva("Escreva um número para a linha", i, " coluna", k )
         mat[i, k] <- randi(11)
      fimpara
   fimpara
   limpatela
   escreval("Escolha Uma Opção:")
   escreval("[ 1 ] Mostrar Matriz Inteira")
   escreval("[ 2 ] Mostrar a Diagonal Da Matriz")
   escreval("[ 3 ] Mostrar o Triângulo Superior")
   escreval("[ 4 ] Mostrar o Triângulo Inferior")
   leia(op)

   se op = 1 então
      para i de 1 até 4 faça
         para k de 1 até 4 faça
            escreva("[", mat[i, k], " ]" )
         fimpara
         escreval()
      fimpara
   fimse

   se op = 2 então
      para i de 1 até 4 faça
         para k de 1 até 4 faça
            se i = k então
               escreval("[", mat[i, k], " ]")
            fimse
         fimpara
      fimpara
   fimse

   se op = 3 então
      para i de 1 até 4 faça
         para k de 1 até 4 faça
            se i < k então
               escreval("[", mat[i, k], " ]")
            fimse
         fimpara
      fimpara
   fimse
   
      se op = 4 então
      para i de 1 até 4 faça
         para k de 1 até 4 faça
            se i > k então
               escreval("[", mat[i, k], " ]")
            fimse
         fimpara
      fimpara
   fimse

Fimalgoritmo