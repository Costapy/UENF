#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CalcPos(int *vet, int a, int n, int i) {

    while(i > 0) {
        if(vet[i-1] > a) {
            vet[i] = vet[i-1];
            i--;
        }
        else {
            break;
        }
    }
    return i;
}

int main() {
    int i, h, n, *vet, a;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    vet = (int *) malloc(n*sizeof(int));
    if(vet == NULL) {
        printf("Erro na alocação de dados...");
        exit(1);
    }

    srand(time(NULL));
    for(i=0; i<n; i++) {
        a = rand()%100;
        h = CalcPos(vet, a, n, i);
        vet[h] = a;
    }

    for(i=0; i<n; i++) {
        printf("[%d] ", vet[i]);
    }

    free(vet);

    return 0;
}