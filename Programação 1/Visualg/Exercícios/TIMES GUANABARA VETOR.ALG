Algoritmo "Times Guanabara Vetor"

Var
   i, k: inteiro

   time: vetor[1..3] de caractere

Inicio
   para i de 1 até 3 faça
      escreva("Nome do", i, "º time: ")
      leia(time[i])
   fimpara

   para i de 1 até 3 faça
      para k de 1 até 3 faça
         se i <> k então
            escreval(time[i], " [] X [] ", time[k])
         fimse
      fimpara
   fimpara


Fimalgoritmo