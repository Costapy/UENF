#ifndef ARVOREBINARIA_H_INCLUDED
#define ARVOREBINARIA_H_INCLUDED

// o tipo árvore binária é definido como um ponteiro a uma estrutura nó.
typedef struct NO* ArvAVL;

ArvAVL* cria_ArvAVL();
void libera_ArvAVL(ArvAVL* raiz);
int insere_ArvAVL(ArvAVL* raiz, int valor);
int remove_ArvAVL(ArvAVL* raiz, int valor);
int estaVazia_ArvAVL(ArvAVL* raiz);
int altura_ArvAVL(ArvAVL* raiz);
int alt_NO(struct NO* no);
int totalNO_ArvAVL(ArvAVL* raiz);
int consulta_ArvAVL(ArvAVL* raiz, int valor);
void emOrdem_ArvAVL(ArvAVL* raiz);

typedef struct NO2* ArvBin;

ArvBin* cria_ArvBin();
void libera_ArvBin(ArvBin* raiz);
int insere_ArBin(ArvBin* raiz, int valor);
int remove_ArvBin(ArvBin* raiz, int valor);
int estaVazia_ArvBin(ArvBin* raiz);
int altura_ArvBin(ArvBin* raiz);
int totalNO_ArvBin(ArvBin* raiz);
int consulta_ArvBin(ArvBin* raiz, int valor);
void emOrdem_ArvBin(ArvBin* raiz);
#endif // ARVOREBINARIA_H_INCLUDED
