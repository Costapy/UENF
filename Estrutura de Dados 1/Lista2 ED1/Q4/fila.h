typedef struct node QUEUE_NODE;
typedef struct queue QUEUE;

QUEUE* createQueue(char* inicial);
QUEUE* destroyQueue(QUEUE* queue);

bool dequeue(QUEUE* queue, void**itemPtr);
bool enqueue(QUEUE* queue, void** itemPtr);
bool queueFront(QUEUE* queue, void** itemPtr);
bool queueRear(QUEUE* queue, void**itemPtr);
int queueCount(QUEUE* queue);

bool emptyQueue(QUEUE* queue);
bool fullQueue(QUEUE* queue);

int findIndex(char *letra);

void showQueue(QUEUE *queue);
