Algoritmo "Contador Pessoas"

Var
   sexo, op: caractere
   ida, conth, contm, cab: inteiro

Inicio
   op <- "S"
   enquanto (op <> "N") fa�a
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
      se (sexo = "M") ent�o
         se (ida > 18) e (cab = 2) ent�o
            conth <- conth + 1
         fimse
      sen�o
         se (ida > 25) e (ida < 30) e (cab = 3) ent�o
            contm <- contm + 1
         fimse
      fimse
      escreva("Deseja continuar[S/N]? ")
      leia(op)
      escreval("===============")
   fimenquanto
   escreval("O n�mero de homens maiores de 18 anos e com cabelo castanho � ", conth)
   escreval("O n�mero de mulheres entre 25 e 30 anos e loiras � ", conth)

Fimalgoritmo