Algoritmo "Imposto de Renda"

Var
sal, imp: real

Inicio
escreva("Sal�rio: ")
leia(sal)
se (sal >= 3000) ent�o
imp <- sal * 0.15
sen�o
se (sal < 3000) ent�o
se (sal >= 1500) ent�o
imp <- sal * 0.07
sen�o
imp <- 0
fimse
fimse
fimse
escreva(imp)


Fimalgoritmo