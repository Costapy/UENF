Algoritmo "Resultado Final"

Var
falta, c, nota, soma: inteiro
media: real

Inicio
para c de 1 até 3 faça
     escreva("Escreva a ", c, "º Nota: ")
     leia(nota)
     soma <- soma+nota
fimpara
media <- soma/3
escreva("O aluno teve quantas faltas? ")
leia(falta)
se (media >= 7) então
   se (falta <= 15) então
      escreva("O aluno foi aprovado!")
   senão
        escreva("O aluno foi reprovado")
   fimse
senão
     escreva("O aluno foi reprovado")
fimse


Fimalgoritmo