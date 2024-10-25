#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinaria.h"

int main()
{
   // Definições de variáveis
    ArvBin* MinhaArvore;
    int *array;
    // int vetor[7]= {20, 15, 40, 10, 17, 18, 50};
    int size = 50;

    MinhaArvore = cria_ArvBin();
    array = (int*)malloc(sizeof(int) * size);
    fill_array(array, size);

    for(int i=0; i < size; i++)
    {
        insere_ArBin(MinhaArvore, array[i]);
    }


	printf("\n A arvore contem os seguintes elementos:\n");
	printf("\n=========PRE ORDEM============\n");
	preOrder_ArvBin(MinhaArvore);
	printf("\n=========Em ORDEM============\n");
	emOrdem_ArvBin(MinhaArvore);
	printf("\n==========POS ORDEM============\n");
	posOrdem_ArvBin(MinhaArvore);
	printf("\n A arvore possui altura %d .\n", altura_ArvBin(MinhaArvore));
	return 0;
}
