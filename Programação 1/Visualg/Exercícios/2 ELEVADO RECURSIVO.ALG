Algoritmo "2 Elevado Recursivo"

Var
   i: inteiro

fun��o elevar(i: inteiro): inteiro

inicio
   se i = 0 ent�o
      retorne(1)
   sen�o
      retorne(2 * elevar(i-1))
   fimse
fimfun��o

Inicio
   leia(i)
   escreva(elevar(i))


Fimalgoritmo