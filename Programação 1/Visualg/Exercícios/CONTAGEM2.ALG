Algoritmo "Contagem"

Var
   ini, fim, c: inteiro

Inicio
   escreva("Inicio da contagem: ")
   leia(ini)
   escreva("Fim da contagem: ")
   leia(fim)
   se ini < fim ent�o
      para c de ini at� fim fa�a
         escreva(c,".. ")
      fimpara
   sen�o
      para c de ini at� fim passo -1 fa�a
         escreva(c,".. ")
      fimpara
   fimse


Fimalgoritmo