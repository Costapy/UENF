Algoritmo "Rendimento do Aluno"

Var
   n1, n2, media: real

Inicio
   escreva("Primeira Nota: ")
   leia(n1)
   escreva("Segunda Nota: ")
   leia(n2)
   media <- ((n1+n2)/2)
   escreva("A média do aluno foi ", media)
   se (media >= 9) e (media <= 10) então
      escreva(" e teve rendimento A!")
   senão
      se (media >= 8) e (media <= 8.9) então
         escreva(" e teve rendimento B!")
      senão
         se (media >= 7) e (media <= 7.9) então
            escreva(" e teve rendimento C.")
         senão
            se (media >= 6) e (media <= 6.9) então
               escreva(" e teve rendimento D.")
            senão
               se (media >= 5) e (media <= 5.9) então
                  escreva(" e teve rendimento E.")
               senão
                  escreva(" e teve rendimento F.")
               fimse
            fimse
         fimse
      fimse
   fimse

Fimalgoritmo