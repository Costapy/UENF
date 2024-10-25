#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista.h"

// Função de comparação para ordenação da lista (exemplo)
int compareInt(int* argu1, int* argu2) {
    if (*argu1 < *argu2)
        return -1;
    else if (*argu1 > *argu2)
        return 1;
    else
        return 0;
}

int main() {
    LIST* myList = createList(compareInt);

    int value1 = 10;
    int value2 = 20;
    int value3 = 30;
    int value4 = 40;

    int *getData;

    getData = (int*)(malloc(sizeof(int)));

    addNode(myList, &value1);
    addNode(myList, &value2);
    addNode(myList, &value3);
    addNode(myList, &value4);

    // printList(myList);

  //  removeNode(myList, &value3, &getData);

 //   printf("Remvendo o elemento %d da lista! \n", *getData);

    retrieveNode(myList, &value2, &getData);
    // printList(myList);

    searchList(myList, &value3, &getData); // Pass the address of getData pointer

    printList(myList);

   // destroyList(myList);

    // Free the memory allocated for getData
    // free(getData);


    return 0;
}
