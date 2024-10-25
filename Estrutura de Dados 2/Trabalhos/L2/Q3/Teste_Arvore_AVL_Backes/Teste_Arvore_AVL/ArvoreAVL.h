#ifndef ARVOREBINARIA_H_INCLUDED
#define ARVOREBINARIA_H_INCLUDED

struct NO {
    int info;
    int alt;
    struct NO* esq;
    struct NO* dir;
};

typedef struct NO* ArvAVL;

ArvAVL* cria_ArvAVL();
void libera_ArvAVL(ArvAVL* raiz);
int fatorBalanceamento_NO(struct NO* no);
void RotacaoLL(ArvAVL* A);
void RotacaoRR(ArvAVL* A);
void RotacaoLR(ArvAVL* A);
void RotacaoRL(ArvAVL* A);
int insere_ArvAVL(ArvAVL* raiz, int valor);
int remove_ArvAVL(ArvAVL* raiz, int valor);
void ArvHierarq(ArvAVL raiz);

#endif // ARVOREAVL_H_INCLUDED

