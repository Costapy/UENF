Algoritmo "Binário Recursivo"

Var
   a, b: inteiro

função binario (a: inteiro):inteiro
inicio
   se a = 0 então
      retorne(0)
      escreval(0)
   senão
      se a = 1 então
         retorne(1)
         escreval(1)
      senão
         escreval(a%2)
        retorne(binario(a\2))
      fimse
   fimse
fimfunção

Inicio
   leia(a)
   b <- binario(a)
Fimalgoritmo