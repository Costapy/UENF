Algoritmo "Times Guanabara Vetor"

Var
   i, k: inteiro

   time: vetor[1..3] de caractere

Inicio
   para i de 1 at� 3 fa�a
      escreva("Nome do", i, "� time: ")
      leia(time[i])
   fimpara

   para i de 1 at� 3 fa�a
      para k de 1 at� 3 fa�a
         se i <> k ent�o
            escreval(time[i], " [] X [] ", time[k])
         fimse
      fimpara
   fimpara


Fimalgoritmo