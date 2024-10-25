#include <stdio.h>
#include <stdlib.h>
#include "Polinomio.h"

int cmpData(void* pA, void* pB)
{
    int* a = (int*)pA;
    int* b = (int*)pB;

    if (*a < *b)
    {
        return -1;
    }
    else if (*a > *b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    LIST* lista1 = createList(cmpData);
    LIST* lista2 = createList(cmpData);
    LIST* resultado = createList(cmpData);

    LIST* result;

    int data1 = 5;
    int grau1 = 3;

    int data2 = 4;
    int grau2 = 2;


    int data3 = 9;
    int grau3 = 1;


    int data4 = 2;
    int grau4 = 4;

    int data5 = 2;
    int grau5 = 6;


    int data6 = 6;
    int grau6 = 3;

    int data7 = 7;
    int grau7 = 2;

    int data8 = 1;
    int grau8 = 9;

    //---------------Lista1-----------

    addNode(lista1, &data5, &grau5);
    addNode(lista1, &data6, &grau6);
    addNode(lista1, &data7, &grau7);
    addNode(lista1, &data8, &grau8);

    //-------------Lista2--------------
    addNode(lista2, &data1, &grau1);
    addNode(lista2, &data2, &grau2);
    addNode(lista2, &data3, &grau3);
    addNode(lista2, &data4, &grau4);

    // Sum polynomials
    result = SomaPol(lista1, lista2, resultado);

    // Display polynomials
    printf("Polinomio 1: ");
    printPoly(lista1);

    printf("Polinomio 2: ");
    printPoly(lista2);

    printf("Soma: ");
    printPoly(result);

   // destroyList(lista1);
   // destroyList(lista2);
 //destroyList(result);

    return 0;
}

