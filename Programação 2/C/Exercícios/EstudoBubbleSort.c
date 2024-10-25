#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Definindo Constantes
#define n 50

void MostraVet(int k, int vet[n]) {
    int i;

    printf("\n-----------------------------------------------------\n");
    for(i=0; i<k; i++) {
        printf("[%d] ", vet[i]);
    }
}

void BubbleSort(int k, int *vet) {
    int i;
    
    for(i=1; i<k+1; i++) {
        int a, piv = vet[i];
        a = i;
        while(a > 0  && vet[a-1] > piv) {
            vet[a] = vet[a-1];
            a--;
        }
        vet[a] = piv;
    }
}

int main() {
    int k, i, vet[n];

    printf("\nTamanho do vetor: ");
    scanf("%d", &k);

    srand(time(NULL));
    for(i=0; i<k; i++) {
        vet[i] = rand()%100;
    }

    MostraVet(k, vet);

    BubbleSort(k, &vet);

    MostraVet(k, vet);

    return 0;
}