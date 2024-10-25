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

void AlocVet(int k, int vet[n]) {
    int i; 

    srand(time(NULL));
    for(i=0; i<k; i++) {
        vet[i] = rand()%100;
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

void EnchVet3(int m, int k, int vet1[n], int vet2[n], int vet3[n]) {
    int i, j;

    j = 0;
    for(i=0; i<m; i++) {
        vet3[i] = vet1[i];
        j++;
    }
    
    for(i=0; i<k; i++) {
        vet3[j] = vet2[i];
        j ++;
    }

}    

int main() {
    int i, k1, k2, vet1[n], vet2[n], vet3[n];

    printf("Tamanho do vetor 1: ");
    scanf("%d", &k1);

    printf("Tamanho do vetor 2: ");
    scanf("%d", &k2);

    srand(time(NULL));
    for(i=0; i<k1; i++) {
        vet1[i] = rand()%100;
    }

    srand(time(NULL));
    for(i=0; i<k2; i++) {
        vet2[i] = rand()%100;
        if (vet2[i] == vet2[i]) {
            vet2[i] = rand()%100;
        }
    }

    EnchVet3(k1, k2, vet1, vet2, vet3);

    MostrarVet(k1, vet1);
    MostrarVet(k2, vet2);
    MostrarVet(k1+k2, vet3);

    OrgVet(k1, vet1);
    OrgVet(k2, vet2);
    OrgVet(k2+k1, vet3);
    
    MostrarVet(k1, vet1);
    MostrarVet(k2, vet2);
    MostrarVet(k1+k2, vet3);

    return 0;
}
