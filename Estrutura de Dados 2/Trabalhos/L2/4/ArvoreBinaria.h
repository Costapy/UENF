#ifndef ARVOREBINARIA_H_INCLUDED
#define ARVOREBINARIA_H_INCLUDED

// o tipo árvore binária é definido como um ponteiro a uma estrutura nó.
typedef struct NO* ArvBin;

ArvBin* cria_ArvBin();
void libera_ArvBin(ArvBin* raiz);
int insere_ArBin(ArvBin* raiz, int valor);
int remove_ArvBin(ArvBin* raiz, int valor);
int estaVazia_ArvBin(ArvBin* raiz);
int altura_ArvBin(ArvBin* raiz);
int totalNO_ArvBin(ArvBin* raiz);
int consulta_ArvBin(ArvBin* raiz, int valor);
int consulta_ArvBin_Recurs(ArvBin* raiz, int valor);
void get_value(int *array, int size, int*value);
void emOrdem_ArvBin(ArvBin* raiz);
void preOrder_ArvBin(ArvBin* raiz);
void posOrdem_ArvBin(ArvBin* raiz);

void fill_array(int *array, int size);
void show_array(int *array, int size);
#endif // ARVOREBINARIA_H_INCLUDED
