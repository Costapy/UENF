#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **aloca(int i, int j);
void leitura(int **p,int i, int j);
void imprime(int **p, int i, int j);
void libera(int **p, int i, int j);

int main()
{
    int **matrix;
    int **m2;

    //chamada de funções
    matrix = aloca(2,3);
    m2 = aloca(3,2);

    leitura(matrix, 2,3);
    leitura(m2, 3, 2);

    imprime(matrix,2,3);
    imprime(m2, 3, 2);

    libera(matrix, 2, 3);
    libera(m2, 3, 2);

  return 0;
}

int **aloca(int i, int j)
{
    int **p; 
    p = (int**)calloc(i, sizeof(int*));  //alocação dinâmica por calloc das linhas da matriz || Alteração: acrescentando (int**) e sizeof(int*)
    if(p==NULL) 
    {
        printf("\nERROR: Problema na alocacao de memoria");
        exit(-1);
    }

    for(int x=0; x<i; x++)
    {
        p[x] = (int*)calloc(j, sizeof(int)); //alocação dinâmica por calloc das colunas da matriz || Alteração: acrecentando (int*)
        if(p[x] == NULL)
        {
            printf("\nErro de alocacao: "); 
            exit(-1);
        }
    }
    return p;
}

void leitura(int**p, int i, int j)
{
    int x, y;
    srand(time(NULL)); //iniciando valores aleatórios 
    for(x=0; x<i;x++){
        for(y=0;y<j;y++)
        {
            p[x][y] = rand()%100;
        }
    }
}

void imprime(int **p, int i, int j)
{
    int x,y;
    for(x=0; x<i; x++) //mostrando valores
    {
        for(y=0;y<j;y++)
        {
            printf("\nMatriz[%d][%d] = %d ", x, y, p[x][y]);
        }
    }
}

void libera(int **p, int i, int j)
{
    for(int x=0; x<i; x++) //liberando linhas
    {
        free(p[x]);
    }

    free(p); 

    printf("\n Liberei");
}