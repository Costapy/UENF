Algoritmo "Analisador Guanabara"

Var
nome, sexo, nma: caractere
ida, ma, m20, c, soma: inteiro
media: real


Inicio
para c de 1 at� 4 fa�a
     escreva("Nome: ")
     leia(nome)
     escreva("Sexo [M/F]: ")
     leia(sexo)
     escreva("Idade: ")
     leia(ida)
     soma <- (soma + ida)
     se c = 1 ent�o
        ma <- ida
        nma <- nome
     sen�o
          se ida > ma ent�o
             ma <- ida
             nma <- nome
          fimse
     fimse
     se sexo = "F" ent�o
        se ida > 20 ent�o
           m20 <- m20 +1
        fimse
     fimse
fimpara
media <- (soma/4)
escreval("A m�dia das idades vale", media)
escreval("A maior idade foi de ", nma, " com ", ma, "anos")
escreval("Ao todo foram", m20, " mulheres com mais de 20 anos")


Fimalgoritmo