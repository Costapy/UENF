#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int PosCerta(int *vet, int n, int i, int a) {
    int j;

    while(i > 0) {
        if(vet[i-1] > a) {
            vet[i] = vet[i-1];
            i--;
        }

        else {
            break;
        }
    }
    return(i);
}

int main() {
    int *vet, n, a, i, k;

    printf("\nTamanho do Vetor: ");
    scanf("%d", &n);

    vet = (int *) malloc(n*sizeof(int));
    if(vet == NULL) {
        printf("\nErro na alocação de dados...");
        exit(1);
    }

    srand(time(NULL));
    for(i=0; i<n; i++) {
        a = rand()%100;
        k = PosCerta(vet, n, i, a);
        vet[k] = a;
    }

    for(i=0; i<n; i++) {
        printf("[%d] ", vet[i]);
    }

    return 0;
}