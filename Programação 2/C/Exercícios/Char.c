#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct data {
    char c;
    int f;
    struct data *lef, *rig;

} stdat;

typedef struct tree {
    int n;
    stdat *dat;
} sttree;

stdat *InsertNode(char cc) {
    stdat *no = (stdat *) malloc(sizeof(stdat));
    no->c = cc;
    no->f = 1;
    no->lef = NULL;
    no->rig = NULL;

    return(no);
}

int InsertData(stdat *no, char cc) {
    int w;

    if(no->c == cc) {
        no->f++;
        w = 0;
    }

    if(no->c > cc) {
        if(no->lef) {
            w = InsertData(no->lef, cc);
        }
        else {
            no->lef = InsertNode(cc);
            w = 1;
        }
    }

    else {
        if(no->rig) {
            w = InsertData(no->rig, cc);
        }
        else {
            no->rig = InsertNode(cc);
            w = 1;
        }
    }

    return(w);
}

void InsertChar(sttree *no, char cc) {
    int nonew;

    if(no->dat) {
        nonew = InsertData(no->dat, cc);
        if(nonew) {
            no->n++;
        }
    }

    else {
        no->dat = InsertNode(cc);
        no->n++;
    }

}

void ShowTree(stdat *no) {
    if(no) {
        ShowTree(no->lef);
		printf(" (%c: %d) \n ", no->c, no->f);
		ShowTree(no->rig);
    }
}

void ShowData(sttree *no) {
    printf("\n ====> São %d tipos de caracteres <====== \n", no->n);
	ShowTree(no->dat);
}

stdat* FreeNodes(stdat *no) {
    if(!no) {
		return NULL;
    }
	no->lef = FreeNodes(no->lef);
	no->rig = FreeNodes(no->rig);
	free(no);
	return NULL;
}

int main() {
    FILE *arq;
    sttree tree;
    char cc;

    arq = fopen("texto.txt", "rt");
    if(arq==NULL) {
        printf("\nErro na abertura do arquivo...\n");
        exit(1);

    }

    tree.n = 0;
    tree.dat = NULL;

    fscanf(arq, "%c", &cc);
    while(!feof(arq)) {
        InsertChar(&tree, cc);
        fscanf(arq, "%c", &cc);
    }

    fclose(arq);

    ShowData(&tree);

    tree.dat = FreeNodes(tree.dat);


    return 0;
}