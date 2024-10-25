#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ArvoreAVL.h"

int main()
{
   // Defini��es de vari�veis	ArvAVL* MinhaArvore;    int *array;
    int size = 50;

    MinhaArvore = cria_ArvAVL();
    array = (int*)malloc(sizeof(int) * size);
    fill_array(array, size);

    for(int i=0; i < size; i++)
    {
        insere_ArvAVL(MinhaArvore, array[i]);
    }
	printf("\n A arvore contem os seguintes elementos:\n");
	printf("\n=========PRE ORDEM============\n");
	preOrder_ArvAVL(MinhaArvore);
	printf("\n=========Em ORDEM============\n");
	emOrdem_ArvAVL(MinhaArvore);
	printf("\n==========POS ORDEM============\n");
	posOrder_ArvAVL(MinhaArvore);
	printf("A altura da arvore e: %d\n",altura_ArvAVL(MinhaArvore));
	return 0;
}
