Algoritmo "Viagem"

Var

   tab: vetor[1..6, 1..6] de inteiro
   i, j, ori, dest : inteiro
   op: caractere

procedimento encher()
inicio
   para i de 1 até 6 faça
      para j de 1 até 6 faça
         se i = j então
            tab[i, j] <- 0
         senão
            tab[i, j] <- randi(15)+1
         fimse
      fimpara
   fimpara
fimprocedimento

procedimento printar()
inicio
   para i de 1 até 6 faça
      para j de 1 até 6 faça
         escreva("[", tab[i,j], "]")
      fimpara
      escreval()
   fimpara
fimprocedimento

Inicio
   encher()
   printar()
   escreval("-------------------------")
   escreva("Escreva a cidade de origem: ")
   leia(ori)
   escreva("Escreva a cidade de destino: ")
   leia(dest)
   
   op <- "S"
   enquanto op <> "N" faça
      se ori <> dest então
         escreval("O tempo é de: ", tab[ori, dest])
         escreva("Deseja Continuar[S/N]? ")
         leia(op)
         escreval("----------------------------")
         escreva("Escreva a cidade de origem: ")
         leia(ori)
         escreva("Escreva a cidade de destino: ")
         leia(dest)
      senão
         enquanto ori = dest faça
            escreval("Escreva Valores Válidos!")
            escreval("----------------------------")
            escreva("Escreva a cidade de origem: ")
            leia(ori)
            escreva("Escreva a cidade de destino: ")
            leia(dest)
         fimenquanto
      fimse
   fimenquanto








Fimalgoritmo