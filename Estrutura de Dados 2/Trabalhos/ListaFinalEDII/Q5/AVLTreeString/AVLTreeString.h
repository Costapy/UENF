#ifndef AVLTREESTRING_H_INCLUDED
#define AVLTREESTRING_H_INCLUDED

    typedef struct NO* ArvAVL;

    ArvAVL* cria_ArvAVL();
    void libera_ArvAVL(ArvAVL *raiz);
    int insere_ArvAVL(ArvAVL *raiz, char* valor);
    int remove_ArvAVL(ArvAVL *raiz, char* valor);
    int estaVazia_ArvAVL(ArvAVL *raiz);
    int altura_ArvAVL(ArvAVL *raiz);
    int totalNO_ArvAVL(ArvAVL *raiz);
    int consulta_ArvAVL(ArvAVL *raiz, char* valor);
    void preOrdem_ArvAVL(ArvAVL *raiz);
    void emOrdem_ArvAVL(ArvAVL *raiz);
    void posOrdem_ArvAVL(ArvAVL *raiz);

#endif // AVLTREESTRING_H_INCLUDED
