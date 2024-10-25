#include <stdio.h>
#include <stdlib.h>

float Operacao(int n, int pos, float val, float soma, float a) { 
    pos++;
    a += 2;
    val = 1/a;
    if(pos > n) {
        return (soma);
    }

    if(pos%2 == 0) {
        return(Operacao(n, pos, val, soma + val, a));
    }
    if(pos%2 != 0) {
        return(Operacao(n, pos, val, soma - val, a)); 
    }
    return (soma);
}


int main() {
    int n;
    float soma;

    printf("Deseja ver o resultado da soma ate qual posicao (comecando do 0)? ");
    scanf("%d", &n);

    soma = 4*(Operacao(n, 0, 1, 1, 1));
    printf("Valor da operacao: %f", soma);

    return 0;
}