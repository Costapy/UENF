Algoritmo "Imposto de Renda"

Var
sal, imp: real

Inicio
escreva("Salário: ")
leia(sal)
se (sal >= 3000) então
imp <- sal * 0.15
senão
se (sal < 3000) então
se (sal >= 1500) então
imp <- sal * 0.07
senão
imp <- 0
fimse
fimse
fimse
escreva(imp)


Fimalgoritmo