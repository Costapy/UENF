#include <stdio.h>
#include <stdlib.h>
#include "ArvoreAVL.h"

int main()
{
   // Definições de variáveis	ArvAVL* MinhaArvore;    int num, vet[10000];

    srand(time(NULL));
    for(int i=0; i<10000; i++) {
        vet[i] = rand()%200;
    }
   // Cria a árvore binária de busca	printf("Comeca o teste da Arvore AVL\n");
	MinhaArvore = cria_ArvAVL();
    // Ingressa dados na árvore binária de busca	for(int i=0; i<10000; i++) {
        insere_ArvAVL(MinhaArvore, vet[i]);
	}	printf("\n A arvore contem os seguintes elementos:\n");	emOrdem_ArvAVL(MinhaArvore);
	printf("A altura da arvore e: %d\n",altura_ArvAVL(MinhaArvore));

	// Definições de variáveis
	ArvBin* MinhaArvoreBin;
    int num2;
   // Cria a árvore binária de busca
	printf("Comeca o teste da arvore binaria de busca\n");

	MinhaArvoreBin = cria_ArvBin();

	for(int i=0; i<10000; i++) {
        insere_ArBin(MinhaArvoreBin, vet[i]);
	}

	printf("\n A arvore contem os seguintes elementos:\n");
	emOrdem_ArvBin(MinhaArvoreBin);
	printf("\n A arvore possui altura %d .\n", altura_ArvBin(MinhaArvoreBin));
	return 0;
}
