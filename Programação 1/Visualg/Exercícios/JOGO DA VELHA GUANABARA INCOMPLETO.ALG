Algoritmo "Jogo Da Velha Guanabara Incompleto"

Var
   jogo: vetor[1..3, 1..3] de inteiro
   i, k, op, cont: inteiro

procedimento printar()

inicio
   op <- 0
   escreval("---------------")
   para i de 1 at� 3 fa�a
      para k de 1 at� 3 fa�a
         op <- op + 1
         se jogo[i, k] = -1 ent�o
            escreva("[ X ]")
         sen�o
            se jogo [i, k] = -2 ent�o
               escreva("[ 0 ]")
            sen�o
               jogo[i, k] <- op
               escreva("[", jogo[i, k], " ]")
            fimse
         fimse
      fimpara
      escreval()
   fimpara
   escreval("---------------")
fimprocedimento

Inicio
   cont <- 0
   enquanto verdadeiro fa�a
      limpatela
      printar()
      cont <- cont + 1
      se ((cont % 2) = 1) ent�o
         escreva("Jogador 1: Onde Deseja Marcar [X]? ")
         leia(op)
         para i de 1 at� 3 fa�a
            para k de 1 at� 3 fa�a
               se op = jogo[i, k] ent�o
                  jogo[i, k] <- -1
               fimse
            fimpara
         fimpara
      sen�o
         escreva("Jogador 2: Onde Deseja Marcar [0]? ")
         leia(op)
         para i de 1 at� 3 fa�a
            para k de 1 at� 3 fa�a
               se op = jogo[i, k] ent�o
                  jogo[i, k] <- -2
               fimse
            fimpara
         fimpara
      fimse
      
      para i de 1 at� 3 fa�a
            para k de 1 at� 3 fa�a
            se i = k ent�o
               se (jogo[i, k] = -1) ou (jogo[i, k] = -2) ent�o
                  escreval("FIM DE JOGO")
                  interrompa
               fimse
            fimse
            fimpara
      fimpara
   fimenquanto


Fimalgoritmo