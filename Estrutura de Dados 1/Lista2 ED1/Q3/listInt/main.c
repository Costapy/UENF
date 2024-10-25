#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "listInt.h"

// Função de comparação para ordenação da lista (exemplo)
int compareInt(void* argu1, void* argu2) {

    if (argu1 < argu2)
        return -1;
    else if (argu1 > argu2)
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

    addNode(myList, &value1);
    addNode(myList, &value2);
    addNode(myList, &value3);
    addNode(myList, &value4);

    printList(myList);


    // Libera a memória alocada pela lista
    destroyList(myList);

    return 0;
}
