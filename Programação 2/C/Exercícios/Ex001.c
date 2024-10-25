#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Definindo Constantes
#define n 50

void MostrarVet(int k, int vet[n]) {
    int i;

    printf("\n---------------------VETOR----------------------\n");
    for(i=0; i<k; i++) {
        printf("[%d]", vet[i]);
    }
}

void OrgVet(int k, int vet[n]) {
    int piv, a, i;

    for(i=1; i<k+1; i++) {
        piv = vet[i];
        a = i;
        while(a > 0 && vet[a-1] > piv) { //Se o anterior for maior que o pivô (atual), o atual recebe o anterior
            vet[a] = vet[a-1];
            a--;
        }
        vet[a] = piv; //O anterior recebe o pivô
    }
}

int main() {
    int i, k, vet[n];

    printf("Tamanho do vetor: ");
    scanf("%d", &k);

    srand(time(NULL));
    for(i=0; i<k; i++) {
        vet[i] = rand()%100;
    }

    MostrarVet(k, vet);

    OrgVet(k, vet);
    
    MostrarVet(k, vet);

    return 0;
}
