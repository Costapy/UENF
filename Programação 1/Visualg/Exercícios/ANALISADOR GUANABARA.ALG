Algoritmo "Analisador Guanabara"

Var
nome, sexo, nma: caractere
ida, ma, m20, c, soma: inteiro
media: real


Inicio
para c de 1 até 4 faça
     escreva("Nome: ")
     leia(nome)
     escreva("Sexo [M/F]: ")
     leia(sexo)
     escreva("Idade: ")
     leia(ida)
     soma <- (soma + ida)
     se c = 1 então
        ma <- ida
        nma <- nome
     senão
          se ida > ma então
             ma <- ida
             nma <- nome
          fimse
     fimse
     se sexo = "F" então
        se ida > 20 então
           m20 <- m20 +1
        fimse
     fimse
fimpara
media <- (soma/4)
escreval("A média das idades vale", media)
escreval("A maior idade foi de ", nma, " com ", ma, "anos")
escreval("Ao todo foram", m20, " mulheres com mais de 20 anos")


Fimalgoritmo