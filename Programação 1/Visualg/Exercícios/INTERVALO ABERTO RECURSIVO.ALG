Algoritmo "Intervalo Aberto Recursivo"

Var
   a, b: inteiro

fun��o soma(a, b: inteiro): inteiro

inicio
   se a = b ent�o
      retorne(-b)
   sen�o
      retorne(a+1 + soma(a+1, b))
   fimse
fimfun��o

Inicio
   leia(a)
   leia(b)
   escreva(soma(a, b))


Fimalgoritmo
