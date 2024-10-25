Algoritmo "Operações Repetição"

Var
   c, n, soma, divi5, cont0, somapar: inteiro
   media: real

Inicio
   para c de 1 até 5 faça
      escreva("Escreva o ", c, "o. Valor: ")
      leia(n)
      soma <- soma + n
      se ((n % 2) = 0) então
         somapar <- somapar + n
      fimse
      se ((n % 5) = 0) então
         divi5 <- divi5 + 1
      fimse
      se (n = 0) então
         cont0 <- cont0 + 1
      fimse
   fimpara
   media <- soma/5
   escreval("A soma dos valores foi", soma)
   escreval("A média foi ", media)
   escreval("Valores divisível por 5: ", divi5)
   escreval("Valores nulos: ", cont0)
   escreval("A soma dos pares é ", somapar)


Fimalgoritmo