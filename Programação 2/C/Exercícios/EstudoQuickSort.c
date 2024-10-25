#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Definindo Constantes
#define n 10

//Mostrando Vetor
void MostraVet(int vet[n]) {
    int i;

    printf("\n-----------------------------------------------------\n");
    for(i=0; i<n; i++) {
        printf("[%d] ", vet[i]);
    }
}

int CalcPos(int vet[n], int a, int b) {
    int piv;
    piv = vet[a];
    a++;

    while(a <= b) {
        //Procurando o Maior Valor
        while(piv >= vet[a]) {
            a++;
        }

        //Procurando o Menor Valor
        while(piv < vet[b]) {
            b--;
        }

        //Trocando a Posição Do Maior Com a Do Menor
        if (a < b) { // Caso a Se Encontre com B
            int temp = vet[a];
            vet[a] = vet[b];
            vet[b] = temp;
        }
    }
    //Retornando o Menor
    return b;
}

void OrdVet(int vet[n], int a, int b) {
    int k;

    //Descobrindo o Menor
    k = CalcPos(vet, a, b);
    //Alocando o Menor Na Posição a
    int temp = vet[a];
    vet[a] = vet[k];
    vet[k] = temp;
    MostraVet(vet);

    //Separando o Vetor (Esquerda Do Vetor)
    if((k-1) > a) {
        OrdVet(vet, a, k-1);
    }

    //Separando o Vetor (Direita Do Vetor)
    if((k+1) < b) {
        OrdVet(vet, k+1, b);
    }
}

int main() {
    int i, vet[n];

    //Preenchendo Vetor
    srand(time(NULL));
    for(i=0; i<n; i++) {
        vet[i] = rand()%100;
    }

    MostraVet(vet);

    OrdVet(vet, 0, n-1);

    MostraVet(vet);

    return 0;
}