#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 10

void MostrarVet(int vet[n]) {
    int i;

    printf("\n-----------------------VETOR-------------------------\n");
    for(i=0; i<n; i++) {
        printf("[%d] ", vet[i]);
    }
}

void SortVet(int vet1[n], int vet2[n]) {
    int i, a, piv;

    for(i=1; i<n+1; i++) {
        piv = vet1[vet2[i]]; 
        a = i;
        
        while(a > 0 && piv < vet1[vet2[a-1]]) {
           vet2[a] = vet2[a-1];
           a--; 
        }
    }

    for(i=0; i<n; i++) {
        vet1[i] = vet1[vet2[i]];
    }
}

int main() {
    int vet1[n], vet2[n], i;


    srand(time(NULL));
    for(i=0; i<n; i++) {
        vet1[i] = rand()%100;
        vet2[i] = i;
    }

    MostrarVet(vet1);
    MostrarVet(vet2);

    SortVet(vet1, vet2);

    MostrarVet(vet1);
    MostrarVet(vet2);

    return 0;
}