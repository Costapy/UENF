#include <stdio.h>
#include <stdlib.h>
#include "ArvoreAVL.h"

int main() {
    ArvAVL* minhaArvore = cria_ArvAVL();

    insere_ArvAVL(minhaArvore, 80);
    insere_ArvAVL(minhaArvore, 70);
    insere_ArvAVL(minhaArvore, 66);
    insere_ArvAVL(minhaArvore, 56);


    ArvHierarq(*minhaArvore);

    libera_ArvAVL(minhaArvore);

    return 0;
}
