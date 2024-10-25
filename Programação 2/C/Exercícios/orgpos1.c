#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definindo Constantes
#define n 6

// Printando o Vetor
void MostraVet(int vet[n]) {
	int i;
	
	printf("\n----------------------------------------------\n");
	for (i=0; i<n; i++) {
		printf("[%d] ", vet[i]);
	}
}

int main() {
	
    int i, k, temp, vet[n];

    //Preenchendo o Vetor
    srand(time(NULL));
    for(i=0; i<n; i++) {
        vet[i] = rand()%100;
    }

    MostraVet(vet);

    for(i=1; i<n+1; i++) {
        int piv = vet[i];
        int a = i;

        while(a > 0 && vet[a-1] > piv) {
            vet[a] = vet[a-1];
            a--;
        }
        vet[a] = piv;
    }

    MostraVet(vet);

    return 0;
}