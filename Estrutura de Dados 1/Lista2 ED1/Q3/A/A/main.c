#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "static_queue.h"
int main()
{
    QUEUE *queue;
    queue = createQueue();

    enqueue(queue, 5);
    enqueue(queue, 2);


    dequeue(queue);
    dequeue(queue);


    enqueue(queue, 11);
    printf("%d\n", peekQueue(queue));


    printf("Has %d elements\n", countQueue(queue));

}
