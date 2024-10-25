#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matriz; // Matriz utiliza ponteiro duplo
    int i,j;
    printf("\nDigite as dimensoes da matriz: "); //iniciando dimensões da matriz
    scanf("%d %d", &i, &j);


    matriz = (int**)calloc(i, sizeof(int*)); // Alocação dinâmica das linhas da matriz|| Alteração: Adição de (int**) e (sizeof(int*))

    if(matriz == NULL)
    {
        printf("\n ERROR: Problema de alocacao de memoria");
        exit(1);
    }

    for(int k=0;k<i;k++)
    {
        matriz[k] = (int*)calloc(j, sizeof(int)); // Alocação dinâmica das colunas da matriz // Alteração: Adicionado (int*)
        if(matriz[k] == NULL)
        {
            printf("\n ERROR: Problema de alocacao de memoria");
        }
    }

    for(int k=0; k<i; k++){
        for(int x=0; x<j; x++)
        {
            printf("Digite o valor para [%d %d]: ", k,x); //Entrando com valores
            scanf("%d", &matriz[k][x]);
        }
    }

    for(int k=0; k<i; k++)
    {
        for(int x=0; x<j; x++)
        {
            printf("O numero do indice [%d, %d] = %d \n", k,x,matriz[k][x]); //Mostrando matriz
        }
    }

    printf("\n Liberando memoria");

    for(int k=0; k<i; k++)
    {
        free(matriz[k]); //Liberando memória
    }
    free(matriz);

    return 0;
}
