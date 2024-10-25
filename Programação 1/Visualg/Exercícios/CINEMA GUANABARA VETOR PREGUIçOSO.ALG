Algoritmo "Cinema Guanabara Vetor Preguiçoso"

Var
   cad: vetor[1..10] de inteiro

   i, lugar, fila: inteiro
   op: caractere

Inicio
   para i de 1 até 10 faça
      cad[i] <- i
   fimpara

   escreval("Escolha uma fileira (só fiz da fileira B pq fiquei com preguiça de encher o vetorkkkkkkkkkk):")
   leia(fila)
   limpatela
   se fila = "B" então
      enquanto op <> "N" faça
         para i de 1 até 10 faça
            se cad[i] <> 0 então
               escreva("[ B", cad[i], " ]")
            senão
               escreva("[ --- ]")
            fimse
         fimpara
         escreval()
         escreva("Deseja Reservar Qual Lugar? B")
         leia(lugar)
         se cad[lugar] <> 0 então
            cad[lugar] <- 0
            escreval("Lugar Reservado!")
         senão
            escreval("Erro! Lugar Já Reservado.")
         fimse
         escreval("Deseja Continuar? [S/N] ")
         leia(op)
         limpatela

      fimenquanto
   fimse

Fimalgoritmo