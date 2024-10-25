#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int k, i, j, pos;

    printf("Tamanho do vetor: ");
    scanf("%d", &k);

    int vet[k];

    srand(time(NULL));
    for(i=0; i<k; i++) {
        vet[i] = rand()%100;
        printf("[%d]", vet[i]);
    }

    for(i=0; i<k; i++) {
            for(j=0; j<k; j++) {
                if(vet[i] < vet[j]) {
                    pos = vet[j];
                    vet[j] = vet[i];
                    vet[i] = pos;
                }
            }
    }
    
    printf("\n---------------------------\n");
    for(i=0; i<k; i++) {
        printf("[%d]", vet[i]);
    }

    return 0;
}