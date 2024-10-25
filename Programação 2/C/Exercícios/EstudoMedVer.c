#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CalcMed(int *vet, int n) {
    int i, soma = 0, med;

    for(i=0; i<n; i++) {
        soma += *(vet + i);
    }

    return(soma/n);
} 

void Verif(int *vet, int n, int med) {
    int i;

    for(i=0; i<n; i++) {
        if(*(vet + i) == med) {
            printf("\nExiste um valor igual a media na posicao %d\n", i);
        }
    }
}

int main() {
    int n, *vet, i, med;

    printf("\nTamanho do Vetor: ");
    scanf("%d", &n);

    vet = (int *) malloc(n*sizeof(int));

    if(vet == NULL) {
        printf("Espaço de memória insuficiente.");
        exit(1);
    }

    srand(time(NULL));
    for(i=0; i<n; i++) {
        *(vet + i) = rand()%100;
        printf("[%d] ", *(vet + i));
    }

    med = CalcMed(vet, n);

    printf("\nA media e aproximadamente igual a %d\n", med);

    Verif(vet, n, med);

    free(vet);

    return 0;
}