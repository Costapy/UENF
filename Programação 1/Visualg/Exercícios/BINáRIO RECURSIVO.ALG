Algoritmo "Bin�rio Recursivo"

Var
   a, b: inteiro

fun��o binario (a: inteiro):inteiro
inicio
   se a = 0 ent�o
      retorne(0)
      escreval(0)
   sen�o
      se a = 1 ent�o
         retorne(1)
         escreval(1)
      sen�o
         escreval(a%2)
        retorne(binario(a\2))
      fimse
   fimse
fimfun��o

Inicio
   leia(a)
   b <- binario(a)
Fimalgoritmo