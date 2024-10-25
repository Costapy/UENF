typedef struct node STACK_NODE;
typedef struct stack STACK;

STACK *createStack(void);
bool pushStack(STACK* stack, int* dataInPtr);
int* popStack(STACK* stack);
int* stackTop(STACK *stack);
bool emptyStack(STACK* stack);
bool fullStack(STACK* stack);
int stackCount(STACK* stack);
STACK* destroyStack(STACK* stack);

