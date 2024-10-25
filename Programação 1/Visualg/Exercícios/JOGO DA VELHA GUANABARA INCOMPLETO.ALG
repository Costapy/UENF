Algoritmo "Jogo Da Velha Guanabara Incompleto"

Var
   jogo: vetor[1..3, 1..3] de inteiro
   i, k, op, cont: inteiro

procedimento printar()

inicio
   op <- 0
   escreval("---------------")
   para i de 1 até 3 faça
      para k de 1 até 3 faça
         op <- op + 1
         se jogo[i, k] = -1 então
            escreva("[ X ]")
         senão
            se jogo [i, k] = -2 então
               escreva("[ 0 ]")
            senão
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
   enquanto verdadeiro faça
      limpatela
      printar()
      cont <- cont + 1
      se ((cont % 2) = 1) então
         escreva("Jogador 1: Onde Deseja Marcar [X]? ")
         leia(op)
         para i de 1 até 3 faça
            para k de 1 até 3 faça
               se op = jogo[i, k] então
                  jogo[i, k] <- -1
               fimse
            fimpara
         fimpara
      senão
         escreva("Jogador 2: Onde Deseja Marcar [0]? ")
         leia(op)
         para i de 1 até 3 faça
            para k de 1 até 3 faça
               se op = jogo[i, k] então
                  jogo[i, k] <- -2
               fimse
            fimpara
         fimpara
      fimse
      
      para i de 1 até 3 faça
            para k de 1 até 3 faça
            se i = k então
               se (jogo[i, k] = -1) ou (jogo[i, k] = -2) então
                  escreval("FIM DE JOGO")
                  interrompa
               fimse
            fimse
            fimpara
      fimpara
   fimenquanto


Fimalgoritmo