
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ArvoreBinaria.h" // Inclui protótipos

// A estrutura do nó da árvore, possui 3 campos: informação inteira, ponteiro esquerdo e ponteiro direito.
struct NO{
   int info;
   struct NO* esq;
   struct NO* dir;
};

// Cria uma árvore binária nula,
// que é um ponteiro duplo nulo a um nó.

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
        printf("%d ", array[i]);
    }
}

ArvBin* cria_ArvBin(){
   // aloca memória para um ponteiro a um nó, e retorna o endereço desse ponteiro
   ArvBin* raiz = (ArvBin*) malloc(sizeof(ArvBin));
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
void libera_ArvBin(ArvBin* raiz){
   // caso trivial ou nulo
   if (raiz == NULL) /* caso a árvore não tenha sido criada */
     return;
   // chamada a função recursiva
   libera_NO(*raiz); /* libera cada nó */
   // libera a raiz
   free(raiz);
}

// função sequencial que insere um novo nó na árvore binaria
// de busca de acordo com o valor fornecido,
// retorna 0 se a inserção for inviável e 1 se for viável.
int insere_ArBin(ArvBin* raiz, int valor){
   // caso trivial ou nulo
   if (raiz == NULL)
      return 0;
   // criação do novo nó
   struct NO* novo;
   novo = (struct NO*) malloc(sizeof(struct NO));
   if (novo == NULL)
     return 0;
   novo->info = valor;
   novo->dir = NULL;
   novo->esq = NULL;
   // percurso sequencial da árvore
   if (*raiz == NULL) /* Arvore vazia */
     *raiz = novo;
   else {
     struct NO* atual = *raiz;
     struct NO* ant = NULL;
     while (atual != NULL){
        ant = atual;
        if (valor == atual->info){
            free(novo); /* libera memoria */
            return 0;   /* elemento já existe */
        }
        if (valor > atual->info)
            atual = atual->dir; /* desce pela direita */
        else
            atual = atual->esq; /* desce pela esquerda */
     }
     // inserção do novo nó
     if (valor > ant->info)
        ant->dir = novo;
     else
        ant->esq = novo;
   }
   return 1;
}

// remove o nó apontado por atual
// retorna o ponteiro ao nó que substitui o nó removido, ou seu descendente ou nulo.
struct NO* remove_atual(struct NO* atual){
   struct NO *no1, *no2; /* ponteiros esquerdo e direito de atual */

   // atual não tem filho esquerdo (só direito ou nenhum)
   if (atual->esq == NULL){
      no2 = atual->dir;
      free(atual);
      return no2;
   }
   //PARTE DE BUSCA PARA ENCONTRAR MAIOR ELEMENTO A ESQUERDA
   //se tiver filho esquerdo, faz uma busca pelo nó antecessor
   no1 = atual;
   no2 = atual->esq;
   while (no2->dir !=NULL){
      no1 = no2;
      no2 = no2->dir;
   }
   // refaz reconexões para que no2 ocupe o lugar do atual
   if (no1 != atual){
     no1->dir = no2->esq; //Null?
     no2->esq = atual->esq; //Null?
   }
   // Substitução de fato
   no2->dir = atual->dir;
   free(atual);
   return no2;
}

// função sequencial que remove um nó na árvore binaria
// de busca que corresponde ao valor indicado,
// retorna 0 se a remoção for inviável e 1 se for viável.
// usa a função remove_atual() para remover o nó localizado.
int remove_ArvBin(ArvBin* raiz, int valor){
// caso trivial ou nulo
   if (raiz == NULL)
      return 0;
   // percurso sequencial da árvore
   struct NO* atual = *raiz;
   struct NO* ant = NULL;
   while (atual != NULL){
        // caso encontre o valor
        if (valor == atual->info){
           if (atual == *raiz)       /* atual é a raiz */
             *raiz = remove_atual(atual);
           else {
              if (ant->dir == atual) /* atual é um filho direito */
                ant->dir = remove_atual(atual);
              else                  /* atual é um filho esquerdo */
                ant->esq = remove_atual(atual);
           }
           return 1;            /* removeu */
        }
        // desce na árvore
        ant = atual;
        if (valor > atual->info)
            atual = atual->dir; /* desce pela direita */
        else
            atual = atual->esq; /* desce pela esquerda */
   }
   return 0;                 /* desceu e não encontrou */
}

// verifica se a árvore está vazia: 1(Sim) 0 (Não)
// raiz é um ponteiro duplo ao nó raiz da árvore
int estaVazia_ArvBin(ArvBin* raiz){
   if (raiz == NULL)  /* A árvore não foi criada */
      return 1;
   if (*raiz == NULL) /* A árvore foi criada, mas não contém elementos */
      return 1;
   return 0;          /* A árvore possui elementos */
};

// função recursiva que retorna a altura da árvore
int altura_ArvBin(ArvBin* raiz){
   // condição de parada
   if (raiz == NULL)
       return 0;
   if (*raiz == NULL)
       return 0;
   // inicio da recorrência
   // calcula a altura esquerda e a altura direita
   int alt_esq = altura_ArvBin(&((*raiz)->esq));
   int alt_dir = altura_ArvBin(&((*raiz)->dir));
   // fim da recorrencia
   // calculo da altura da subárvore
   if (alt_esq >alt_dir)
       return (alt_esq + 1);
   else
       return (alt_dir + 1);
}

// função recursiva que calcula o número de nós da árvore
int totalNO_ArvBin(ArvBin* raiz){
   // condição de parada
   if (raiz == NULL)
       return 0;
   if (*raiz == NULL)
       return 0;
   // inicio da recorrência
   // calcula o total de nós a esquerda e a direita
   int total_esq = totalNO_ArvBin(&((*raiz)->esq));
   int total_dir = totalNO_ArvBin(&((*raiz)->dir));
   // fim da recorrencia
   // calculo do total de nós da subárvore
   return (total_esq + total_dir + 1);
}

// função sequencial que percorre a árvore de busca binária desde a raiz até:
// achar o valor desejado 1 (sim) ou confirmar que o valor não existe 0 (não).
int consulta_ArvBin(ArvBin* raiz, int valor){
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
}

// função recursiva que percorre a árvore em-ordem imprimindo os dados.
void emOrdem_ArvBin(ArvBin* raiz){
    // condição de parada
   if (*raiz == NULL)
      return;
   // inicio da recorrência
   if (*raiz != NULL) {
      emOrdem_ArvBin(&((*raiz)->esq));
      printf("%d\n",(*raiz)->info);
      emOrdem_ArvBin(&((*raiz)->dir));
   }
   // fim da recorrência
}

void preOrder_ArvBin(ArvBin* raiz)
{
    if (*raiz == NULL)
        return;
    if (*raiz != NULL){
   // Visite o nó raiz (imprima seu valor ou realize outra operação)
       printf("%d\n", (*raiz)->info);

       // Realize o percurso em pré-ordem no filho esquerdo
       preOrder_ArvBin(&((*raiz)->esq));

       // Realize o percurso em pré-ordem no filho direito
       preOrder_ArvBin(&((*raiz)->dir));
    }
}

void posOrdem_ArvBin(ArvBin* raiz)
{
    if(*raiz == NULL)
        return;
    if(*raiz != NULL)
    {
        posOrdem_ArvBin(&((*raiz)->esq));
        posOrdem_ArvBin(&((*raiz)->dir));
        printf("%d \n", (*raiz)->info);
    }
}
