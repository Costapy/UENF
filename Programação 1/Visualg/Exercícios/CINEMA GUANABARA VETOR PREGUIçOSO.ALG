Algoritmo "Cinema Guanabara Vetor Pregui�oso"

Var
   cad: vetor[1..10] de inteiro

   i, lugar, fila: inteiro
   op: caractere

Inicio
   para i de 1 at� 10 fa�a
      cad[i] <- i
   fimpara

   escreval("Escolha uma fileira (s� fiz da fileira B pq fiquei com pregui�a de encher o vetorkkkkkkkkkk):")
   leia(fila)
   limpatela
   se fila = "B" ent�o
      enquanto op <> "N" fa�a
         para i de 1 at� 10 fa�a
            se cad[i] <> 0 ent�o
               escreva("[ B", cad[i], " ]")
            sen�o
               escreva("[ --- ]")
            fimse
         fimpara
         escreval()
         escreva("Deseja Reservar Qual Lugar? B")
         leia(lugar)
         se cad[lugar] <> 0 ent�o
            cad[lugar] <- 0
            escreval("Lugar Reservado!")
         sen�o
            escreval("Erro! Lugar J� Reservado.")
         fimse
         escreval("Deseja Continuar? [S/N] ")
         leia(op)
         limpatela

      fimenquanto
   fimse

Fimalgoritmo