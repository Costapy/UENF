Algoritmo "Esquação"

Var
raiz, a, b, c, x1, x2: real
função delta(a:real; b:real; c:real): real
inicio
retorne(b^2-4*a*c)
fimfunção

Inicio
escreval("Considerando a função ax²+bx+c = 0")
escreva("Escreva o valor de a: ")
leia(a)
escreva("Escreva o valor de b: ")
leia(b)
escreva("Escreva o valor de c: ")
leia(c)
raiz <- (delta(a, b, c)^(1/2))
se raiz > 0 então
x1 <- (-b + raiz)/(2*a)
x2 <- (-b - raiz)/(2*a)
escreval("X1 = ", x1)
escreval("X2 = ", x2)
senão
escreva("A expressão não pertence aos reais")
fimse

Fimalgoritmo