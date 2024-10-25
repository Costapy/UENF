Algoritmo "Contagem"

Var
   ini, fim, c: inteiro

Inicio
   escreva("Inicio da contagem: ")
   leia(ini)
   escreva("Fim da contagem: ")
   leia(fim)
   se ini < fim então
      para c de ini até fim faça
         escreva(c,".. ")
      fimpara
   senão
      para c de ini até fim passo -1 faça
         escreva(c,".. ")
      fimpara
   fimse


Fimalgoritmo