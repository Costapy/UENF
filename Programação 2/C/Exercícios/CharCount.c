#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct data {
    char c;
    int f;
    struct data *esq, *dir;
} stnode;

typedef struct arvore {
    int n;
    stnode *lst;
} starv;

stnode *insereNode(char cc) {
    stnode *no = (stnode *) malloc(sizeof(stnode));
    no->c = cc;
    no->f = 1;
    no->dir = no->esq = NULL;

    return(no);
}

int regData(stnode *node, char cc) {
    int w;

    if(node->c == cc) {
        node->f++;
        w = 0;
    }

    else {
        if(node->c > cc) {
            if(node->esq) {
                w = regData(node, cc);
            }

            else {
                node->esq = insereNode(cc);
                w = 1;
            }
        }

        else {
            if(node->dir) {
                w = regData(node, cc);
            }

            else {
                node->dir = insereNode(cc);
                w = 1;
            }
        }
    }
    return(w);
} 

void regChar(starv *arv, char cc) {
    int new;

    if(arv->lst) {
        new = regData(arv->lst, cc);
        if(new) {
            arv->n++;
        }
    }

    else {
        arv->lst = insereNode(cc);
        arv->n++;
    }
}

void mostraOrdenada(stnode *no) {

    if(no) {
        mostraOrdenada(no->esq);
        printf(" (%c: %d) \n ", no->c, no->f);
        mostraOrdenada(no->dir);
    }
}

void mostraDadosArvore(starv *arv) {
    
    printf("\nSao %d tipos de caracteres\n", arv->n);
    mostraOrdenada(arv->lst);
}

stnode* liberaNodesArvore (stnode* no)
{
	if(!no)
		return NULL;
	no->esq = liberaNodesArvore (no->esq);
	no->dir = liberaNodesArvore (no->dir);
	free(no);
	return NULL;
}

int main() {
    FILE *arq;
    char cc;
    starv arv;

    arq = fopen("Texto.txt", "r");
    if(arq==NULL) {
        printf("\nFalha ao abrir o arquivo...\n");
        exit(0);
    }

    arv.n = 0;
    arv.lst = NULL;

    fscanf(arq,"%c", &cc);
    while (!feof(arq)) {
        regChar(&arq, cc);
        fscanf(arq,"%c", &cc);
    }
    fclose(arq);

    mostraDadosArvore(&arv);

    arv.lst = liberaNodesArvore(arv.lst);


    return 0;
}