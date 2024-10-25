#include <stdio.h>
#include <stdlib.h>
#include "AVLTreeString.h"
#include <ctype.h>


void converterParaMaiuscula(char *palavra) {
    int i = 0;
    while (palavra[i] != '\0') {
        palavra[i] = toupper(palavra[i]);
        i++;
    }
}
void limparPalavra(char* palavra)
{
    int i = 0;
    if(!isalpha((int)palavra[i]))
    {
        while(palavra[i] != '\0'){
            palavra[i] = palavra[i+1];
            i++;
        }
    }


    i = strlen(palavra) -1;

    if(!isalpha((int)palavra[i]))
        palavra[i] = '\0';

}


int main()
{
    FILE *arquivo;
    char palavra[100];
    int maiorPalavra;
    ArvAVL *Tree;

    Tree = cria_ArvAVL();
    arquivo = fopen("gtsybrg.txt", "r");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 1;
    }

     while (fscanf(arquivo, "%s", palavra) == 1)
     {
         limparPalavra(palavra);
         converterParaMaiuscula(palavra);
         //printf(" %s", palavra);
         insere_ArvAVL(Tree, palavra);
     }
//     printf("%d", totalNO_ArvAVL(Tree));
//     posOrdem_ArvAVL(Tree);
}
