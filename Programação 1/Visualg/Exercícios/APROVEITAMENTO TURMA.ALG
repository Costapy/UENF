Algoritmo "Aproveitamento Turma"

Var
   c: inteiro
   media, maior: real
   nma, nome: caractere

Inicio
   para c de 1 at� 4 fa�a
      escreva("Nome: ")
      leia(nome)
      escreva("Nota do aluno: ")
      leia(media)
      escreval("-----------------")
      se (c = 1) ent�o
         maior <- media
         nma <- nome
      sen�o
         se (media > maior) ent�o
            maior <- media
            nma <- nome
         fimse
      fimse
   fimpara
   escreva("O aluno com melhor aproveitamento foi ", (nma), " com ", maior)

Fimalgoritmo