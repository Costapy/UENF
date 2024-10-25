Algoritmo "Intervalo Aberto Recursivo"

Var
   a, b: inteiro

função soma(a, b: inteiro): inteiro

inicio
   se a = b então
      retorne(-b)
   senão
      retorne(a+1 + soma(a+1, b))
   fimse
fimfunção

Inicio
   leia(a)
   leia(b)
   escreva(soma(a, b))


Fimalgoritmo
