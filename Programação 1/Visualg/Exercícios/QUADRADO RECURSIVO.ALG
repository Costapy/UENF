Algoritmo "Quadrado Recursivo"

Var
   n, a: inteiro
   
função quadrado(n: inteiro): inteiro
inicio
   se n = 0 então
      retorne(1)
   senão
      retorne(2 * quadrado(n-1))
   fimse
fimfunção

Inicio
   escreva("Escreva a potência de 2: ")
   leia(n)
   a <- quadrado(n)
   escreval("O valor de 2 elevado a ", n, " é igual a", a)

Fimalgoritmo