Algoritmo "Dissecando Matrizes Guanabara"

Var
   mat: vetor[1..4, 1..4] de inteiro

   i, k, op: inteiro


Inicio
   para i de 1 at� 4 fa�a
      para k de 1 at� 4 fa�a
         escreva("Escreva um n�mero para a linha", i, " coluna", k )
         mat[i, k] <- randi(11)
      fimpara
   fimpara
   limpatela
   escreval("Escolha Uma Op��o:")
   escreval("[ 1 ] Mostrar Matriz Inteira")
   escreval("[ 2 ] Mostrar a Diagonal Da Matriz")
   escreval("[ 3 ] Mostrar o Tri�ngulo Superior")
   escreval("[ 4 ] Mostrar o Tri�ngulo Inferior")
   leia(op)

   se op = 1 ent�o
      para i de 1 at� 4 fa�a
         para k de 1 at� 4 fa�a
            escreva("[", mat[i, k], " ]" )
         fimpara
         escreval()
      fimpara
   fimse

   se op = 2 ent�o
      para i de 1 at� 4 fa�a
         para k de 1 at� 4 fa�a
            se i = k ent�o
               escreval("[", mat[i, k], " ]")
            fimse
         fimpara
      fimpara
   fimse

   se op = 3 ent�o
      para i de 1 at� 4 fa�a
         para k de 1 at� 4 fa�a
            se i < k ent�o
               escreval("[", mat[i, k], " ]")
            fimse
         fimpara
      fimpara
   fimse
   
      se op = 4 ent�o
      para i de 1 at� 4 fa�a
         para k de 1 at� 4 fa�a
            se i > k ent�o
               escreval("[", mat[i, k], " ]")
            fimse
         fimpara
      fimpara
   fimse

Fimalgoritmo