Algoritmo "Aproveitamento Turma"

Var
   c: inteiro
   media, maior: real
   nma, nome: caractere

Inicio
   para c de 1 até 4 faça
      escreva("Nome: ")
      leia(nome)
      escreva("Nota do aluno: ")
      leia(media)
      escreval("-----------------")
      se (c = 1) então
         maior <- media
         nma <- nome
      senão
         se (media > maior) então
            maior <- media
            nma <- nome
         fimse
      fimse
   fimpara
   escreva("O aluno com melhor aproveitamento foi ", (nma), " com ", maior)

Fimalgoritmo