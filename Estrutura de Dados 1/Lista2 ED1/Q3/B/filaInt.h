typedef struct node QUEUE_NODE;
typedef struct queue QUEUE;

QUEUE* createQueue(void);
QUEUE* destroyQueue(QUEUE* queue);

bool dequeue(QUEUE* queue, int**itemPtr);
bool enqueue(QUEUE* queue, int* itemPtr);
bool queueFront(QUEUE* queue, int** itemPtr);
bool queueRear(QUEUE* queue, int**itemPtr);
int queueCount(QUEUE* queue);

bool emptyQueue(QUEUE* queue);
bool fullQueue(QUEUE* queue);
