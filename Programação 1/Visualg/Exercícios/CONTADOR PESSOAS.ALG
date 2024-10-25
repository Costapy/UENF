Algoritmo "Contador Pessoas"

Var
   sexo, op: caractere
   ida, conth, contm, cab: inteiro

Inicio
   op <- "S"
   enquanto (op <> "N") faça
      escreva("Sexo[M/F]: ")
      leia(sexo)
      escreva("Idade: ")
      leia(ida)
      escreval("---------------")
      escreval("[1] Preto")
      escreval("[2] Castanho")
      escreval("[3] Loiro")
      escreval("[4] Ruivo")
      leia(cab)
      se (sexo = "M") então
         se (ida > 18) e (cab = 2) então
            conth <- conth + 1
         fimse
      senão
         se (ida > 25) e (ida < 30) e (cab = 3) então
            contm <- contm + 1
         fimse
      fimse
      escreva("Deseja continuar[S/N]? ")
      leia(op)
      escreval("===============")
   fimenquanto
   escreval("O número de homens maiores de 18 anos e com cabelo castanho é ", conth)
   escreval("O número de mulheres entre 25 e 30 anos e loiras é ", conth)

Fimalgoritmo