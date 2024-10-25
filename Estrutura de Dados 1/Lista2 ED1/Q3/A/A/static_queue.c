#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "static_queue.h"

typedef struct queue
{
    int array[MAX];
    int head, count, tail;
}QUEUE;

QUEUE* createQueue()
{
    QUEUE* queue;

    queue = (QUEUE*)malloc(sizeof(QUEUE));
    if(queue)
    {
        queue->head = 0;
        queue->tail = 0;
        queue->count = 0;
    }

    return queue;
}
void destroyQueue(QUEUE* queue)
{
    free(queue);
}


bool enqueue(QUEUE* queue, int data)
{
  //  data = (int*)malloc(sizeof(int));
    if(queue && queue->count != MAX)
    {
        queue->array[queue->tail] = data;
        queue->tail = (queue->tail + 1)%MAX;
        queue->count++;
        return true;
    }
    else{
        printf("ERROR: Queue is out of range or doesn't exist");
        exit(-1);
    }
}

bool dequeue(QUEUE* queue)
{
    if (!emptyQueue(queue))
    {
        queue->head = (queue->head + 1) %MAX;
        queue->count--;
        return true;
    }
    else
    {
        printf("ERROR: Queue is empty! \n FINISHING THE TERMINAL....");
        exit(-1);
    }
}
int countQueue(QUEUE* queue)
{
    if(queue)
        return queue->count;
    else
        return -1;
}

bool emptyQueue(QUEUE* queue)
{
    if(queue)
        return queue->count == 0;
    else
        printf("ERROR: Queue does not exist");
        exit(-1);
}

bool fullQueue(QUEUE* queue)
{
    if(queue)
        return queue->count == MAX;
    else
    {
        printf("ERROR: Queue does not exist");
        exit(-1);
    }
}
int peekQueue(QUEUE* queue)
{
    int dataOut;
    if(!emptyQueue(queue))
    {
        dataOut = queue->array[queue->head];
        return dataOut;
    }
    printf("ERROR: Queue is empty");
    exit(-1);
}

