#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// constantes

#define nL 10  // num de linhas
#define nC 10  // num de colunas
#define limite 5 // limite de erro

typedef struct mat {
  int n, m; //linhas e colunas
  int **dat; //matriz
} stMat;

typedef struct vet {
  int n; //tamanho vet
  int *dat; //vet
} stVet;

// dados e variaveis globais
void defMatriz(stMat *mat){
int i, j;
	srand(time(NULL));
	for(i=0; i<mat -> n; i++)
		for(j=0; j<mat -> m; j++)
			mat -> dat[i][j] = rand()%256;
}

void mostraMatriz(stMat *mat){
    int i, j ;
    printf("\n ---> Matriz %dx%d <--- \n", mat -> n, mat -> m);
    for(i=0 ; i< mat -> n; i++){
        for(j=0 ; j<mat -> m; j++){
            printf("%d ", mat -> dat[i][j]);
        }
      printf("\n");
      }
}

void mostraVetor(stVet *v){
	int i;
	printf("\n Vetor(%d)\n", v->n);
	for(i=0; i<v->n; i++)
		printf("%d  ", v->dat[i]);
	printf("\n");
}

void agrupa(stMat *MatE, stMat *MatT, stVet *vetK){
	int i, j, h, dmin, d, ik;
	for(i=0; i< MatE->n; i++){
  	    for(j=0; j< MatE->m; j++){
  	    	dmin = 10000;
  	    	for(h=0; h<vetK->n; h++){
  	    	    d = abs(MatE->dat[i][j] - vetK->dat[h]);
			    if(d < dmin){
	   		 		 dmin = d;
			   		 ik = h;
			    }	
            
	        }
		    MatT->dat[i][j] = ik;	
        }
	}
}

void geraMatSolucao(stMat *matT, stMat *matS, stVet *vetK){
	int i, j, h;
	for(i=0; i<matT->n; i++){
		for(j=0; j<matT->m; j++){
			h = matT->dat[i][j];
			matS->dat[i][j] = vetK->dat[h];		
		}
	}
}


void calMedia(stMat *matE, stMat *matT, stVet *vetMed) {
	int vetC[10], i, j, h;
	for(i=0; i<vetMed->n; i++) {
		vetC[i] = 0;
		vetMed->dat[i] = 0;
	}

  
	for(i=0; i<matE->n; i++){
		for(j=0; j<matE->m; j++){
			h = matT->dat[i][j];
			vetMed->dat[h] += matE->dat[i][j];
			vetC[h] += 1; 
		}
	}
	
	// calcula media
	for(i=0; i<vetMed->n; i++) {
		vetMed->dat[i] /= vetC[i];
	}
}


int calDistancia(stVet *vetRef, stVet *vetMed) {
	int i, d;
	
	for(i=0; i<vetRef->n; i++) {
		d = vetRef->dat[i] - vetMed->dat[i];
		if(d > limite) {
			return (d);
		}
	}
	return (d);
}

void trocavet(stVet *vetRef, stVet *vetMed) {
	int i;
	
	for(i=0; i<vetRef->n; i++) {
		vetRef->dat[i] = vetMed->dat[i];	
	}
}


void alocaMat(stMat *mat) {
  int i;
  
  mat->dat = (int*) malloc(mat->n * sizeof(int));
  for(i=0; i<mat->n; i++) {
    mat->dat[i] = (int*) malloc(mat->m * sizeof(int));
  }
}

void liberaMat(stMat *mat) {
  int i;
  
  for(i=0; i<mat->n; i++) {
    free(mat->dat[i]);
  }
  free(mat->dat);
}

void alocaVet(stVet *v) {
  v->dat = (int *) malloc(v->n * sizeof(int));
}

void liberaVet(stVet *v) {
  free(v->dat);
}

//principal

int main(void) {
//IO
  
  stMat MatE, MatS, MatT;
  stVet vetRef, vetNov, vetMed;
    
  int n, m, k, h, i, j, d;; 
  printf("\n Digite o numero de linhas e de colunas: ");
  scanf("%d %d", &n, &m);
  
  MatE.n = MatS.n = MatT.n = n;
  MatE.m = MatS.m = MatT.m = m;

  alocaMat(&MatE);
  alocaMat(&MatT);
  alocaMat(&MatS);
		
  defMatriz(&MatE);
  mostraMatriz(&MatE);
  
	// k relevantes
	printf("\n Digite o valor de K... ");
	scanf("%d", &k);

  vetRef.n = vetMed.n = vetNov.n = k;
  alocaVet(&vetRef);
  alocaVet(&vetMed);
  alocaVet(&vetNov);
  
  
	srand(time(NULL));
	for(h=0; h<vetRef.n; h++){
		i = rand()%MatE.n;
		j = rand()%MatE.m;
		vetRef.dat[h] = MatE.dat[i][j];
    }
  
// agrupamento
	do{
	   agrupa(&MatE, &MatT, &vetRef);
	   calMedia(&MatE, &MatT, &vetMed);
	   printf("\n> Vetor Media\n");
	   mostraVetor(&vetMed);
	   d = calDistancia(&vetRef, &vetMed);
	   trocavet(&vetRef, &vetMed);  // vetRef = vetNov;
	   mostraVetor(&vetRef);
	} while(d>limite);
	
	printf("\n > Matriz Media\n");
	mostraMatriz(&MatT);
	
	printf("\n> Matris Resultante \n");
  
    geraMatSolucao(&MatT, &MatS, &vetRef); 
	mostraMatriz(&MatS);

    liberaMat(&MatE);
    liberaMat(&MatT);
    liberaMat(&MatS);
    liberaVet(&vetMed);
    liberaVet(&vetNov);
    liberaVet(&vetRef);

	return 0; 
}