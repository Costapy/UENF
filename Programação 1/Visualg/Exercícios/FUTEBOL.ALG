Algoritmo "Futebol"

Var
   g1, g2, dif: inteiro

Inicio
   escreval("=================")
   escreval("BANGU X MADUREIRA")
   escreval("=================")
   escreva("Quantos gols do Bangu? ")
   leia(g1)
   escreva("Quantos gols do Madureira? ")
   leia(g2)
   dif <- (g1 - g2)
   se (dif = 0) ent�o
      escreva("A partida foi um empate.")
   sen�o
      se ((dif > 0) e (dif < 3)) ou ((dif < 0) e (dif > -3)) ent�o
         escreva("Foi uma partida normal")
      sen�o
         escreva("A partida foi uma Goleada!")
      fimse
   fimse
Fimalgoritmo