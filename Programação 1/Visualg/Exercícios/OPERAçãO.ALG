Algoritmo "Opera��o"

Var
oper: caractere
soma, sub, mult, n1, n2: inteiro
divi: real

Inicio
escreva("Escreva um n�mero real: ")
leia(n1)
escreva("Escreva outro n�mero real: ")
leia(n2)
escreva("Escreva um operador(+, -, *, /): ")
leia(oper)
escolha(oper)
caso "+"
soma <- n1 + n2
escreva(soma)
caso "-"
sub <- n1 - n2
escreva(sub)
caso "*"
mult <- n1 * n2
escreva(mult)
caso "/"
divi <- n1 / n2
escreva(divi)
fimescolha

Fimalgoritmo