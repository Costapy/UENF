Algoritmo "Resultado Final"

Var
falta, c, nota, soma: inteiro
media: real

Inicio
para c de 1 at� 3 fa�a
     escreva("Escreva a ", c, "� Nota: ")
     leia(nota)
     soma <- soma+nota
fimpara
media <- soma/3
escreva("O aluno teve quantas faltas? ")
leia(falta)
se (media >= 7) ent�o
   se (falta <= 15) ent�o
      escreva("O aluno foi aprovado!")
   sen�o
        escreva("O aluno foi reprovado")
   fimse
sen�o
     escreva("O aluno foi reprovado")
fimse


Fimalgoritmo