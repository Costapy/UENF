#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Definindo Constantes

#define n 10

void MostrarVet(int vet[n]) {
	int i;
	
	printf("\n-------------------VETOR-------------------\n");
	for(i=0; i<n; i++) {
		printf("[%d]", vet[i]);
	}
}

int Pos(int vet[n],int a ,int b) {
	int piv = a;
	a++;
	
	while(a <= b) {
		while(vet[piv] >= vet[a]) {
			a++;
		}	
		while(vet[piv] < vet[b]) {
			b--;
		}
	    if(a < b){
	
           int temp = vet[a];
           vet[a] = vet[b];
           vet[b] = temp;
        }
	}
	return(b);
}






void OrdVet(int vet[n],int a,int b) {
	int h;
	
	h = Pos(vet, a, b);
	int temp = vet[a];
	vet[a] = vet[h];
	vet[h] = temp;
	if((h-1) > a) {
        OrdVet(vet, a, h-1);
	} 
	if((h+1) < b) {
        OrdVet(vet, h+1, b);	
	}
}





int main() {
	int vet[n], i;
	
	srand(time(NULL));
	for(i=0; i<n; i++){
		vet[i] = rand()%100;	
	}
	
	MostrarVet(vet);
	
	OrdVet(vet, 0, n-1);
	
	MostrarVet(vet);
	
	return 0;
}
