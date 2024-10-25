#include <stdio.h>
#include <stdlib.h>
#include "ListaEncadeada.h"

int cmpData (void* pA, void*pB)
{

  if(pA < pB)
  {
      return -1;
  }

  else if(pA > pB)
  {
      return 1;
  }

  else
  {
      return 0;
  }
}


int main()
{
    printf("Hello world!\n");
    LIST *lista;
    int *getData;

    lista = createList(cmpData);

    addNode(lista, 5);
    addNode(lista, 7);
    addNode(lista, 9);
    addNode(lista, 11);
    addNode(lista, 6);
    addNode(lista, 15);

    searchList(lista, 5, &getData);

    retrieveNode(lista, 5, &getData);



    printf("%d \n", getData);






}
