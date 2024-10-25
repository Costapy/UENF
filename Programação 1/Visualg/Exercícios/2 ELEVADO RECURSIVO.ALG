Algoritmo "2 Elevado Recursivo"

Var
   i: inteiro

função elevar(i: inteiro): inteiro

inicio
   se i = 0 então
      retorne(1)
   senão
      retorne(2 * elevar(i-1))
   fimse
fimfunção

Inicio
   leia(i)
   escreva(elevar(i))


Fimalgoritmo