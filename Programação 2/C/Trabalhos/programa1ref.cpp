#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// definir constantes
#define nL 10 // linhas da matriz
#define nC 10 // colunas da matriz

// definir matriz de entrada
void defmatriz(int matE[nL][nC]) {
	
	int i, j;
	srand(time(NULL));
	
	for(i=0; i<nL; i++) {
		for(j=0; j<nC; j++){
			matE[i][j] = rand()%256; // o resto da divisão ocorre para o número escolhido ser menor que 256
		}		
	}	
}

// mostrar matriz de entrada
void mostrarmatriz(int matE[nL][nC]) {
	
	int i, j;
	
	printf("============== MATRIZ 10X10 ===============\n");
	for(i=0; i<nL; i++) {
		for(j=0; j<nC; j++) {
			printf(" [%d] ", matE[i][j]);
		}
		printf("\n");
	}
	printf("===========================================\n");
}


// definir k relevantes
void definirvetK(int vet[10], int k) {
	
	int i;
	srand(time(NULL));
	
	for(i=0; i<k; i++) {
		
		vet[i] = rand()%256; // o resto da divisão ocorre para o número escolhido ser menor que 256
		printf("%d ", vet[i]);
	}
	printf("\n");		
}

// realizar os agrupamentos
void agrupamentos(int matE[nL][nC], int matT[nL][nC], int vet[10], int k) {
	
	int d, i, j, h, dif, pos;
	
	for(i=0; i<nL; i++) {
		for(j=0; j<nC; j++) {
			d = 10000;
			for(h=0; h<k; h++) {
				dif = abs(matE[i][j] - vet[h]);	// verificando qual cor o pixel selecionado mais se aproxima
				if(dif < d) {
					d = vet[h];
					pos = h;
				}
			}
			matT[i][j] = pos;	
		}		
	}	
}

// distribuir
void distribuirVal(int matT[nL][nC], int matE[nL][nC], int vet[10]) {
	
	int i, j, h;
	
	for(i=0; i<nL; i++) {
		for(j=0; j<nC; j++) {
			h = matT[i][j];
			matE[i][j] = vet[h];	
		}
	}
	
}


// mostrar matriz de saída

// criar matrizes e vetores
int main(void) {
	
	int matE[nL][nC]; // matriz de entrada
	int matT[nL][nC]; // matriz temporária
	int matS[nL][nC]; // matriz de saída
	int vetK[10];
	int k;
	
	defmatriz(matE);
	mostrarmatriz(matE);
	
	printf("Escreva um valor para k: ");
	scanf("%d", &k);
	definirvetK(vetK, k);
	
	agrupamentos(matE, matT, vetK, k);
	mostrarmatriz(matT);
	
	distribuirVal(matT, matE, vetK);
	mostrarmatriz(matE);
	
	return 0;
}
