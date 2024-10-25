#define MAX 5

typedef struct queue QUEUE;

QUEUE* createQueue();
void destroyQueue(QUEUE* queue);
bool enqueue(QUEUE* queue, int data);
bool dequeue(QUEUE* queue);
int countQueue(QUEUE* queue);
bool emptyQueue(QUEUE* queue);
bool fullQueue(QUEUE* queue);
int peekQueue(QUEUE* queue);
void showQueue(QUEUE* queue);

