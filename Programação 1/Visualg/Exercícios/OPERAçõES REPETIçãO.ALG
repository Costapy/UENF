Algoritmo "Opera��es Repeti��o"

Var
   c, n, soma, divi5, cont0, somapar: inteiro
   media: real

Inicio
   para c de 1 at� 5 fa�a
      escreva("Escreva o ", c, "o. Valor: ")
      leia(n)
      soma <- soma + n
      se ((n % 2) = 0) ent�o
         somapar <- somapar + n
      fimse
      se ((n % 5) = 0) ent�o
         divi5 <- divi5 + 1
      fimse
      se (n = 0) ent�o
         cont0 <- cont0 + 1
      fimse
   fimpara
   media <- soma/5
   escreval("A soma dos valores foi", soma)
   escreval("A m�dia foi ", media)
   escreval("Valores divis�vel por 5: ", divi5)
   escreval("Valores nulos: ", cont0)
   escreval("A soma dos pares � ", somapar)


Fimalgoritmo