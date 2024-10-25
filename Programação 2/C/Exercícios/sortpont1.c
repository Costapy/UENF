#include <stdio.h>
#include <stdlib.h>

#define n 50

//Printando Vetor
void MostrarVet(int k, int *vet[n]) {
    int i;

    printf("\n---------------VETOR-----------------\n");
    for(i=0; i<k; i++) {
        printf("[%d] ", vet[i]);
    }
}

//Organizando Vetor
void PosicaoCerta(int k, int *vet) {
    int i, j, temp;

    for(i=0; i<k; i++) {
        for(j=0; j<k; j++) {
            if (vet[i] < vet[j]) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }
}

int main() {

    int i, k, vet[n];

    //Tamanho do Vetor
    printf("Tamanho do vetor: ");
    scanf("%d", &k);

    //Preenchendo Vetor
    for(i=0; i<k; i++) {
        printf("\nValor para a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    MostrarVet(k, vet);

    PosicaoCerta(k, &vet);

    MostrarVet(k, vet);

    return 0;
}