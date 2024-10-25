#include <stdio.h>
#include <stdlib.h>

//Definindo Constantes
#define n 50

void MostrarVet(int k, int vet[n]) {
    int i;

    printf("\n-------------------VETOR--------------------\n");
    for(i=0; i<k; i++) {
        printf("[%d]", vet[i]);
    }
}

void VetPos(int k, int *vet1, int *vet2) {
    int i, a;

    for(i=1; i<k+1; i++) {
        int piv = vet1[i];
        a = i - 1;
        while(a >= k-1 && piv > vet1[a-1]) {
            vet2[a] = a - 1;
            a--;
        }
        vet2[i] = a;
    }
}

void OrgVet1(int k, int *vet1, int *vet2) {
    int i;

    for(i=0; i<k; i++) {
        vet1[i] = vet1[vet2[i]];
    }
}

int main() {
    int i, k, v1[n], v2[n];

    //Tamanho Do Vetor
    printf("\nTamanho do Vetor: ");
    scanf("%d", &k);

    //Preenchendo Vetor1
    for(i=0; i<k; i++){
        printf("Posicao %d: ", i);
        scanf("%d", &v1[i]);
    }
    
    MostrarVet(k, v1);

    VetPos(k, &v1, &v2);

    OrgVet1(k, &v1, &v2);

    MostrarVet(k, v2);

    MostrarVet(k, v1);
    
    return 0;
}