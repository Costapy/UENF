Algoritmo "Rendimento do Aluno"

Var
   n1, n2, media: real

Inicio
   escreva("Primeira Nota: ")
   leia(n1)
   escreva("Segunda Nota: ")
   leia(n2)
   media <- ((n1+n2)/2)
   escreva("A m�dia do aluno foi ", media)
   se (media >= 9) e (media <= 10) ent�o
      escreva(" e teve rendimento A!")
   sen�o
      se (media >= 8) e (media <= 8.9) ent�o
         escreva(" e teve rendimento B!")
      sen�o
         se (media >= 7) e (media <= 7.9) ent�o
            escreva(" e teve rendimento C.")
         sen�o
            se (media >= 6) e (media <= 6.9) ent�o
               escreva(" e teve rendimento D.")
            sen�o
               se (media >= 5) e (media <= 5.9) ent�o
                  escreva(" e teve rendimento E.")
               sen�o
                  escreva(" e teve rendimento F.")
               fimse
            fimse
         fimse
      fimse
   fimse

Fimalgoritmo