#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float CalcSoma(int n, int pos, float a, float soma, float val) {
    
    pos++;
    a += 2;
    val = 1/a;
    if(pos > n) {
        return (soma);
    }

    if(pos%2 == 0) {
        return(CalcSoma(n, pos, a, soma + val, val));
    }

    if(pos%2 != 0) {
        return(CalcSoma(n, pos, a, soma - val, val));
    }

    return(soma);
}

int main() {
    int n;
    float val;

    printf("\nDeseja ver o valor da soma ate qual posicao? ");
    scanf("%d", &n);

    val = 4*(CalcSoma(n, 0, 1, 1, 1));
    printf("\n%f\n", val);


    return 0;
}