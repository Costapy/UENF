#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "fila.h"

typedef struct node
{
    void* dataPtr;
    struct node* next;
}QUEUE_NODE;

typedef struct queue
{
    char *letter;
    QUEUE_NODE* front;
    QUEUE_NODE* rear;
    int count;
}QUEUE;


QUEUE* createQueue(char *inicial)
{
    QUEUE* queue; // Defining queue

    queue = (QUEUE*)malloc(sizeof(QUEUE)); // Allocating memory

    if(queue) // If malloc works...
    {
        queue->letter = *inicial;
        queue->front = NULL;
        queue->rear = NULL;
        queue->count = 0;
    }

    return queue;
}


bool enqueue(QUEUE* queue, void**itemPtr)
{
    QUEUE_NODE* newPtr;
    newPtr = (QUEUE_NODE*)malloc(sizeof(QUEUE_NODE));

    if(!newPtr)
    {
        return false;
    }

    newPtr->dataPtr = *itemPtr; // Get data
    newPtr->next = NULL;

    //
    if(queue->count == 0)
        queue->front = newPtr; // If it's empty, front will pointing to newptr
    else
        queue->rear->next = newPtr; // rear->next will poiting to newptr

    (queue->count)++;
    queue->rear = newPtr; // rear pointing to newptr. It's the last element added in the queue.
    return true;
}

bool dequeue(QUEUE* queue, void**itemPtr)
{
    QUEUE_NODE* deleteLoc; // temp pointer

    if(!queue->count)
    {
        return false;
    }

    // Getting the data and pointing to the first element
    *itemPtr = queue->front->dataPtr;
    deleteLoc = queue->front;

    if(queue->count==1)//if it has just one element
    {
        queue->rear = queue->front = NULL;// rear and queue will be null
    }
    else
    {
        queue->front = queue->front->next; // queue->front gonna point to the next pointer of the queue
    }

    // Delete and remove -1 of count
    (queue->count)--;
    free(deleteLoc);

    return true;
}

bool queueFront(QUEUE* queue, void** itemPtr)
{
    if(!queue->count) // If it's 0
    {
        return false;
    }
    else
    {
        *itemPtr = queue->front->dataPtr; // ItemPtr will get the first element
        return true;
    }
}

bool queueRear(QUEUE* queue, void**itemPtr)
{
    if(!queue->count) // if it's zero
    {
        return false;
    }
    else{
        *itemPtr = queue->rear->dataPtr; // ItemPtr will get the last element
        return true;
    }
}

bool emptyQueue(QUEUE* queue)
{
    return (queue->count == 0); // If it's zero so it's empty
}

bool fullQueue(QUEUE* queue)
{
    QUEUE_NODE *temp;

    temp = (QUEUE_NODE*)malloc(sizeof(QUEUE_NODE)); // Try to allocate a new node
    if(temp) // If it works, so it can allocate memory
    {
        free(temp); // Free the memory allocated
        return false;
    }
    return true; // If malloc fails...
}

int queueCount(QUEUE* queue)
{
    return queue->count; // return how many elements have in the queue
}

QUEUE* destroyQueue(QUEUE* queue)
{
    QUEUE_NODE* deletePtr; // Create a new pointer

    if(queue)
    {
        while(queue->front != NULL) // If front is null it's because it hasn't more elements
        {
            free(queue->front->dataPtr); // First free the data
            deletePtr = queue->front; // DeletePtr poiting to queue-front
            queue->front = queue->front->next; // Update queue->front to the next pointer
            free(deletePtr); // deletePtr
        }
        free(queue); // After free all nodes, free the queue
    }
    return NULL;
}

int findIndex(char *letra)
{
    *letra = tolower(*letra);
    if(*letra >= 'a' && *letra <= 'z')
        return (*letra) - 'a';
    else
        return -1;
}

void showQueue(QUEUE *queue)
{
    QUEUE_NODE* now = queue->front;

    while(now != NULL)
    {
        printf("%s ", now->dataPtr);
        now = now->next;
    }
    printf("\n");
}








