Algoritmo "IMC"

Var
   massa, altura, imc: real

Inicio
   escreva("Massa: ")
   leia(massa)
   escreva("Altura: ")
   leia(altura)
   imc <- (massa/(altura^2))
   escreva("O seu imc vale ", imc)
   se (imc > 18.5) e (imc < 25) então
      escreva(" e você está no peso ideal!")
   senão
      escreva(" e você não está no peso ideal.")
   fimse

Fimalgoritmo
