Algoritmo "Quadrado Recursivo"

Var
   n, a: inteiro
   
fun��o quadrado(n: inteiro): inteiro
inicio
   se n = 0 ent�o
      retorne(1)
   sen�o
      retorne(2 * quadrado(n-1))
   fimse
fimfun��o

Inicio
   escreva("Escreva a pot�ncia de 2: ")
   leia(n)
   a <- quadrado(n)
   escreval("O valor de 2 elevado a ", n, " � igual a", a)

Fimalgoritmo