#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ArvoreAVL.h" // Inclui protótipos

// A estrutura do nó da árvore, possui 3 campos: informação inteira, ponteiro esquerdo e ponteiro direito.
struct NO{
   int info;
   int alt;
   struct NO* esq;
   struct NO* dir;
};

void fill_array(int *array, int size)
{
    srand(time(NULL));

    for(int i=0; i < size; i++)
    {
        array[i] = rand()%120;
    }
}

void show_array(int* array, int size)
{
    for(int i=0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}

// Cria uma árvore binária nula,
// que é um ponteiro duplo nulo a um nó.
ArvAVL* cria_ArvAVL(){
   // aloca memória para um ponteiro a um nó, e retorna o endereço desse ponteiro
   ArvAVL* raiz = (ArvAVL*) malloc(sizeof(ArvAVL));
   if (raiz != NULL)
      *raiz = NULL;
   return raiz;
}

// função recursiva que libera a memória alocada
// a cada nó de uma subárvore
void libera_NO(struct NO* no){
  // condição de parada
  if (no == NULL)
    return
  // inicio das recorrências
  libera_NO(no->esq);
  libera_NO(no->dir);
  // fim das recorrências
  free(no);  /* libera a memoria alocada ao nó */
  no = NULL; /* faz o ponteiro nulo */
}

// função que libera a memória alocada a todos os nós da árvore;
// para isso usa a função recursiva libera_NO().
void libera_ArvAVL(ArvAVL* raiz){
   // caso trivial ou nulo
   if (raiz == NULL) /* caso a árvore não tenha sido criada */
     return;
   // chamada a função recursiva
   libera_NO(*raiz); /* libera cada nó */
   // libera a raiz
   free(raiz);
}

// função recursiva que retorna a altura da árvore
int altura_ArvAVL(ArvAVL* raiz){
   // condição de parada
   if (raiz == NULL)
       return 0;
   if (*raiz == NULL)
       return 0;
   // inicio da recorrência
   // calcula a altura esquerda e a altura direita
   int alt_esq = altura_ArvAVL(&((*raiz)->esq));
   int alt_dir = altura_ArvAVL(&((*raiz)->dir));
   // fim da recorrencia
   // calculo da altura da subárvore
   if (alt_esq >alt_dir)
       return (alt_esq + 1);
   else
       return (alt_dir + 1);
}

//retorna a altura de um nó
int alt_NO(struct NO* no){
   if (no == NULL)
       return 0;  /* 0 é um valor nulo */
   else
       return no->alt;
}

// retorna o fator de balanceamento de um nó
int fatorBalanceamento_NO(struct NO* no){
   return labs(alt_NO(no->esq)-alt_NO(no->dir));
}

// retorna o maior entre dois valores
int maior (int x, int y){
  if (x > y)
    return x;
  else
    return y;
}

// função recursiva que calcula o número de nós da árvore
int totalNO_ArvAVL(ArvAVL* raiz){
   // condição de parada
   if (raiz == NULL)
       return 0;
   if (*raiz == NULL)
       return 0;
   // inicio da recorrência
   // calcula o total de nós a esquerda e a direita
   int total_esq = totalNO_ArvAVL(&((*raiz)->esq));
   int total_dir = totalNO_ArvAVL(&((*raiz)->dir));
   // fim da recorrencia
   // calculo do total de nós da subárvore
   return (total_esq + total_dir + 1);
}

// rotação LL: rotação do caso Esquerda-Esquerda
// rotação simples à direita
// A: ponteiro duplo, primeiro nó desbalanceado
// B: ponteiro simples, filho esquerdo de A
void RotacaoLL (ArvAVL *A) {
   struct NO *B;
   B = (*A)->esq;
   // reconexões correpondentes à roração à direita
   (*A)->esq = B->dir;
   B->dir = *A;
   // recalculo das alturas: (*A) abaixo de B
   (*A)->alt = maior(alt_NO((*A)->esq),
                     alt_NO((*A)->dir))+1;
    B->alt = maior(alt_NO(B->esq),(*A)->alt)+1;
   // atualização do ponteiro de cima
   *A = B;
}

// rotação RR: rotação do caso Direita-Direita
// rotação simples à esquerda
// A: ponteiro duplo, primeiro nó desbalanceado
// B: ponteiro simples, filho direito de A
void RotacaoRR (ArvAVL *A) {
   struct NO *B;
   B = (*A)->dir;
   // reconexões correpondentes à roração à esquerda
   (*A)->dir = B->esq;
   B->esq = *A;
   // recalculo das alturas: (*A) abaixo de B
   (*A)->alt = maior(alt_NO((*A)->esq),
                     alt_NO((*A)->dir))+1;
    B->alt = maior(alt_NO(B->dir),(*A)->alt)+1;
   // atualização do ponteiro de cima
   *A = B;
}

// rotação LR: rotação do caso Esquerda-Direita
// rotação dupla à direita
// A: ponteiro duplo, primeiro nó desbalanceado
// B: ponteiro simples, filho esquerdo de A
void RotacaoLR (ArvAVL *A) {
    RotacaoRR(&(*A)->esq); /* Rotação esquerda em B */
    RotacaoLL(A);          /* Rotação direita em A */
}

// rotação RL: rotação do caso Direita-Esquerda
// rotação dupla à esquerda
// A: ponteiro duplo, primeiro nó desbalanceado
// B: ponteiro simples, filho direito de A
void RotacaoRL (ArvAVL *A) {
    RotacaoLL(&(*A)->dir); /* Rotação direita em B  */
    RotacaoRR(A);          /* Rotação esquerda em A */
}

// função recursiva que insere um novo nó na árvore AVL
// de acordo com o valor fornecido.
// retorna 0 se a inserção for inviável e 1 se for viável.
// calcula o fator de balanceamento, e corrige a árvore AVL
int insere_ArvAVL(ArvAVL* raiz, int valor){
   int res;
   // caso trivial ou nulo
   if (raiz == NULL)
      return 0;
   // Condição de parada: Árvore vazia ou folha
   if (*raiz == NULL){
     // criação do novo nó
     struct NO* novo;
     novo = (struct NO*) malloc(sizeof(struct NO));
     if (novo == NULL)
       return 0;
     novo->info = valor;
     novo->alt = 0;
     novo->dir = NULL;
     novo->esq = NULL;
     *raiz = novo;
     return 1;
   }
   // recorrência
   struct NO* atual = *raiz;
   if (valor < atual->info){
     if ((res = insere_ArvAVL(&(atual->esq),valor)) == 1){
        if (fatorBalanceamento_NO(atual) >= 2){
            if (valor < (*raiz)->esq->info)
               RotacaoLL(raiz); /* caso esquerda-esquerda */
            else
               RotacaoLR(raiz); /* caso esquerda-direita */
        }
     }
   }else {
   if (valor > atual->info){
     if ((res = insere_ArvAVL(&(atual->dir),valor)) == 1){
        if (fatorBalanceamento_NO(atual) >= 2){
            if (valor > (*raiz)->dir->info)
               RotacaoRR(raiz); /* caso direita-direita */
            else
               RotacaoRL(raiz); /* caso direita-esquerda */
        }
     }
   }
   else /* valor duplicado */
   return 0;
   }
   atual->alt=maior(alt_NO(atual->esq),alt_NO(atual->dir))+1;
   return res;
};

// função sequêncial que procura o menor nó da subárvore com raiz atual
struct NO* procuraMenor(struct NO* atual){
    struct NO *no1 = atual, *no2 = atual->esq;
    while (no2 != NULL){
        no1 = no2;
        no2 = no2->esq;
    }
    return no1;
}

// função recursiva que remove um nó na árvore AVL
// que corresponde ao valor indicado,
// retorna 0 se a remoção for inviável e 1 se for viável.
int remove_ArvAVL(ArvAVL* raiz, int valor){
   int res;
   // caso trivial ou nulo
   if (raiz == NULL)
      return 0;
   if (*raiz == NULL) /* valor não existe */
      return 0;
   // etapa de busca - recorrência
   // struct NO* atual = *raiz;
   if (valor < (*raiz)->info){
     if ((res = remove_ArvAVL(&(*raiz)->esq,valor)) == 1){
        if (fatorBalanceamento_NO(*raiz) >= 2){
            if (alt_NO((*raiz)->dir->esq)<=
                alt_NO((*raiz)->dir->dir))
               RotacaoRR(raiz); /* caso direita-direita */
            else
               RotacaoRL(raiz); /* caso direita-esquerda */
        }
     }
   }
   if (valor > (*raiz)->info){
     if ((res = remove_ArvAVL(&(*raiz)->dir,valor)) == 1){
        if (fatorBalanceamento_NO(*raiz) >= 2){
            if (alt_NO((*raiz)->esq->dir)<=
                alt_NO((*raiz)->esq->esq))
               RotacaoLL(raiz); /* caso esquerda-esquerda */
            else
               RotacaoLR(raiz); /* caso esquerda-direita */
        }
     }
   }
   // Condição de parada
   if ((*raiz)->info == valor){ /* encontrou o elemento */
     // se a raiz tem apenas um filho ou nenhum
     if (((*raiz)->esq == NULL) || ((*raiz)->dir == NULL)){
        struct NO* no1 = (*raiz);
        if ((*raiz)->esq != NULL)
          *raiz = (*raiz)->esq; /* encadeia a subárvore esquerda */
        else
          *raiz = (*raiz)->dir; /* encadeia a subárvore direita */
        free(no1);
     }
     else { // a raiz tem dois filhos
        struct NO* no1 = procuraMenor((*raiz)->dir); /* procura o sucessor          */
        (*raiz)->info = no1->info;        /* substitui o valor da raiz   */
        remove_ArvAVL(&(*raiz)->dir, no1->info); /* remove o nó sucessor */
        if (fatorBalanceamento_NO(*raiz) >=2){
            if (alt_NO((*raiz)->esq->dir) <=
                alt_NO((*raiz)->esq->esq))
              RotacaoLL(raiz); /* caso esquerda-esquerda */
            else
              RotacaoLR(raiz); /* caso esquerda-direita */
        }
     }
     // recalcula a altura do nó raiz
     if (*raiz != NULL)
       (*raiz)->alt = maior(alt_NO((*raiz)->esq),
                            alt_NO((*raiz)->dir))+1;
     return 1;
   }
   // recalcula a altura do nó raiz
   (*raiz)->alt = maior(alt_NO((*raiz)->esq),
                        alt_NO((*raiz)->dir))+1;
   return res;                 /* retorna o resultado da remoção */
};

// verifica se a árvore está vazia: 1(Sim) 0 (Não)
// raiz é um ponteiro duplo ao nó raiz da árvore
int estaVazia_ArvAVL(ArvAVL* raiz){
   if (raiz == NULL)  /* A árvore não foi criada */
      return 1;
   if (*raiz == NULL) /* A árvore foi criada, mas não contém elementos */
      return 1;
   return 0;          /* A árvore possui elementos */
};



// função sequencial que percorre a árvore de busca binária desde a raiz até:
// achar o valor desejado 1 (sim) ou confirmar que o valor não existe 0 (não).
int consulta_ArvAVL(ArvAVL* raiz, int valor){
   // cpndição de parada
   if (raiz == NULL)
       return 0;
   // percurso sequêncial
   struct NO* atual = *raiz;   /* ponteiro ao nó raiz */
   while (atual != NULL){
      if (valor == atual->info){
         return 1;             /* valor encontrado */
      }
      if (valor > atual->info)
        atual = atual->dir;    /* desce pela subárvore direita */
      else
        atual =atual->esq;     /* desce pela subárvore esquerda */
   }
   return 0;                   /* valor não existe */
};

// função recursiva que percorre a árvore em-ordem imprimindo os dados.
void emOrdem_ArvAVL(ArvAVL* raiz){
    // condição de parada
   if (*raiz == NULL)
      return;
   // inicio da recorrência
   if (*raiz != NULL) {
      emOrdem_ArvAVL(&((*raiz)->esq));
      printf("%d\n",(*raiz)->info);
      emOrdem_ArvAVL(&((*raiz)->dir));
   }
   // fim da recorrência
};


void preOrder_ArvAVL(ArvAVL* raiz)
{
    if (*raiz == NULL)
        return;
    if (*raiz != NULL){
   // Visite o nó raiz (imprima seu valor ou realize outra operação)
       printf("%d\n", (*raiz)->info);

       // Realize o percurso em pré-ordem no filho esquerdo
       preOrder_ArvAVL(&((*raiz)->esq));

       // Realize o percurso em pré-ordem no filho direito
       preOrder_ArvAVL(&((*raiz)->dir));
    }
}

void posOrder_ArvAVL(ArvAVL* raiz)
{
    if(*raiz == NULL)
        return;
    if(*raiz != NULL)
    {
        posOrder_ArvAVL(&((*raiz)->esq));
        posOrder_ArvAVL(&((*raiz)->dir));
        printf("%d \n", (*raiz)->info);
    }
}
