
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "listInt.h"

typedef struct node
{
    int* dataPtr;
    struct node* link;
}NODE;

typedef struct list
{
    int count;
    NODE *pos;
    NODE *head;
    NODE *rear;
    int (*compare)(int* argu1, int* argu2);
}LIST;

LIST* createList(int (*compare) (int* argu1, int* argu2))
{
    LIST* list;

    list = (LIST*)malloc(sizeof(LIST));
    if(list)
    {
        list->head = NULL;
        list->pos = NULL;
        list->rear = NULL;
        list->count = 0;
        list->compare = compare;
    }

    return list;
}

int addNode(LIST* pList, int* dataInPtr)
{
    bool found;
    bool success;

    NODE* pPre;
    NODE* pLoc;


    success = _insert(pList, pPre, dataInPtr);
    if(!success)
    {
        return -1;
    }

    return 0;
}

static int _insert(LIST* pList, NODE*pPre, int*dataInPtr)
{
    NODE *pNew;

    pNew = (NODE*)malloc(sizeof(NODE));
    if(!pNew)
    {
        return false;
    }

    pNew->dataPtr = dataInPtr;
    pNew->link = NULL;

    if(pPre == NULL)
    {
        pNew->link = pList->head;
        pList->head = pNew;
        if(pList->count == 0)
        {
            pList->rear = pNew;
        }
    }
    else
    {
        pNew->link = pPre->link;
        pPre->link = pNew;

        if(pNew->link == NULL)
        {
            pList->rear = pNew;
        }
    }

    (pList->count)++;
    return true;
}

bool removeNode(LIST* pList, int* keyPtr, int**dataOutPtr)
{
    bool found;
    NODE *pPre;
    NODE* pLoc;

    found = _search(pList, &pPre, &pLoc, keyPtr);
    if (found)
        _delete(pList, pPre, pLoc, dataOutPtr);
    return found;
}

void _delete(LIST* pList, NODE*pPre, NODE* pLoc, int**dataOutPtr)
{
    *dataOutPtr = pLoc->dataPtr;
    if(pPre == NULL)
        pList->head = pLoc->link;
    else
        pPre->link = pLoc->link;

    if(pLoc->link == NULL)
            pList->rear = pPre;

    (pList->count)--;
    free(pLoc);

    return;
}

bool searchList(LIST* pList, int*pArgu, int**pDataOut)
{
    bool found;

    NODE*pPre;
    NODE*pLoc;

    found = _search(pList, &pPre, &pLoc, pArgu);
    if(found)
        *pDataOut = pLoc->dataPtr;
    else
        *pDataOut = NULL;
    return found;
}


static bool _search(LIST *pList, NODE**pPre, NODE**pLoc, int**pArgu)
{
    #define COMPARE ( ((* pList->compare) (pArgu, (*pLoc)->dataPtr)))

    #define COMPARE_LAST ((* pList->compare) (pArgu, pList->rear->dataPtr))

    int result;

    *pPre = NULL;
    *pLoc = pList->head;
    if(pList->count == 0)
        return false;

    if(COMPARE_LAST > 0)
    {
        *pPre = pList->rear;
        *pLoc = NULL;
        return false;
    }

    while ( (result = COMPARE) > 0)
    {
        *pPre = *pLoc;
        *pLoc = (*pLoc)->link;
    }

    if (result == 0)
        return true;
    else
        return false;

}

static bool retrieveNode(LIST* pList, int* pArgu, int**dataOutPtr)
{
    bool found;

    NODE* pPre;
    NODE* pLoc;

    found = _search(pList, &pPre, &pLoc, pArgu);
    if(found)
    {
        *dataOutPtr = pLoc->dataPtr;
        return true;
    }

    *dataOutPtr = NULL;
    return false;
}

LIST* destroyList(LIST* pList)
{
    NODE* deletePtr;

    if(pList)
    {
        while(pList->count > 0)
        {
            free(pList->head->dataPtr);

            deletePtr = pList->head;
            pList->head = pList->head->link;
            pList->count--;
            free(deletePtr);
        }

        free(pList);
    }

    return NULL;
}


void printList(LIST* pList)
{
    NODE* current = pList->head;
    printf("Valores na lista:\n");
    while (current != NULL)
    {
        int* value = (int*)current->dataPtr;
        printf("%d ", *value);
        current = current->link;
    }
    printf("\n");
}


