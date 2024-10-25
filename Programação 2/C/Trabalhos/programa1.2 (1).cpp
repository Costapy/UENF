#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// constantes

#define nL 10  // num de linhas
#define nC 10  // num de colunas
#define limite 5 // limite de erro

// dados e variaveis globais

void defMatriz(int n, int m, int Mat[nL][nC]) {
	int i, j;
	srand(time(NULL));
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			Mat[i][j] = rand()%256;
}

void mostraMatriz (int n, int m, int Mat[nL][nC]) {
	int i, j;
	printf("\n ---> Matriz %dx%d <--- \n", n, m);
	for(i=0; i<n; i++){
		for(j=0; j<m; j++)
			printf("%d  ", Mat[i][j]);
		printf("\n");
	}	
}

void mostraVetor(int n, int v[10]){
	int i;
	printf("\n ---. Vetor(%d) .... \n", n);
	for(i=0; i<n; i++)
		printf("%d  ", v[i]);
	printf("\n");
}

void agrupa(int n, int m, int E[nL][nC],int T[nL][nC],int k, int vetK[10]){
	int i, j, h, dmin, d, ik;
	for(i=0; i<n; i++){
  	    for(j=0; j<m; j++){
  	    	dmin = 10000;
  	    	for(h=0; h<k; h++){
  	    	    d = abs(E[i][j] - vetK[h]);
			    if(d < dmin){
	   		 		 dmin = d;
			   		 ik = h;
			    }	
            
	        }
		    T[i][j] = ik;	
        }
	}
}

void geraMatSolucao(int matT[nL][nC], int matS[nL][nC], int vetK[10]){
	int i, j, h;
	for(i=0; i<nL; i++){
		for(j=0; j<nC; j++){
			h = matT[i][j];
			matS[i][j] = vetK[h];		
		}
	}
}

void calMedia(int n,int m,int matE[nL][nC],int matT[nL][nC],int k,int vetMed[10]) {
	int vetC[10], i, j, h;
	for(i=0; i<k; i++) {
		vetC[i] = 0;
		vetMed[i] = 0;
	}
	
	for(i=0; i<nL; i++){
		for(j=0; j<nC; j++){
			h = matT[i][j];
			vetMed[h] += matE[i][j];
			vetC[h] += 1; 
		}
	}
	
	// calcula media
	for(i=0; i<k; i++) {
		vetMed[i] /= vetC[i];
	}
}

int calDistancia(int k, int vetRef[10], int vetMed[10]) {
	int i, d;
	
	for(i=0; i<k; i++) {
		d = vetRef[i] - vetMed[i];
		if(d > limite) {
			return (d);
		}
	}
	return (d);
}

void trocavet(int k, int vetRef[10], int vetMed[10]) {
	int i;
	
	for(i=0; i<k; i++) {
		vetRef[i] = vetMed[i];	
	}
}

// principal

int main (void) {
	// definir entrada - saida
	int matE[nL][nC];     // matriz de entrada
	int matS[nL][nC];     // matriz de saida
	int matT[nL][nC];     // matris de trabalho
	
	int vetRef[10];    // vetor centro de referencias
	int vetMed[10];    // vetor de novos centros
	int h, i, j, k, d;
		
	defMatriz(nL, nC, matE);
	mostraMatriz(nL, nC, matE);
	
	// k relevantes
	printf("\n Digite o valor de K... ");
	scanf("%d", &k);
	srand(time(NULL));
	for(h=0; h<k; h++){
		i = rand()%nL;
		j = rand()%nC;
		vetRef[h] = matE[i][j];
	}
	
	mostraVetor(k, vetRef);
	// agrupamento
	do{
	   agrupa(nL, nC, matE, matT, k, vetRef);
	   calMedia(nL, nC, matE, matT, k, vetMed);
	   printf("\n -------- Vetor Media--------\n");
	   mostraVetor(k, vetMed);
	   d = calDistancia(k, vetRef, vetMed);
	   trocavet(k, vetRef, vetMed);  // vetRef = vetNov;
	   mostraVetor(k, vetRef);
	} while(d>limite);
	
	printf("\n -------- Matriz Media ------------\n");
	mostraMatriz(nL, nC, matT);
	
	geraMatSolucao(matT, matS, vetRef); 
	
//	mostraMatriz(nL, nC, matS);
	printf("\n Matris Resultante \n");
	mostraMatriz(nL, nC, matS);	

	return 0; 
}
