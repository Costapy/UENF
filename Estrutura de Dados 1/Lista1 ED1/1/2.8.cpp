#include <stdio.h>
#include <stdlib.h>

void aloca(int ***p, int i, int j) {
    int x;
    
    *p = (int **) malloc(i*sizeof(int*)); //alocação dinâmica das linhas por malloc || Alteração: sizeof(int*)
    if(*p == NULL) {
        printf("\nErro na alocacao de dados...");
        exit(1);
    }
    
    for(x=0; x<j; x++) {
        (*p)[x] = (int *) malloc(j*sizeof(int)); //alocação dinâmica das colunas por malloc
    }
    if(*p[x] == NULL) {
        printf("\nErro na alocacao de dados...");
        exit(1);
    }
}

int main() {
    int **p, i, k;
    
    aloca(&p, 4, 5); //enviando o endereço de p
    
    for(i=0;i<4;i++){
        for( k=0;k<5;k++) { //iniciando valores
            p[i][k] = i + k;
        }    
    }    

    for(i=0;i<4;i++) {
        for( k=0;k<5;k++) {
            printf("%d ", p[i][k]); //mostrando matriz
        }
        printf("\n");
    }

    //Não existia uma parte no código para liberar a memória
    for(i=0; i<4; i++)
    {
        free(p[i]);
    }

    free(p);

    return 0;
}
