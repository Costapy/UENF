#define MAX 20
typedef struct stack STACK;

STACK* createStack(void);
bool pushStack(STACK* stack, int num);
int popStack(STACK* stack);
int stackTop(STACK* stack);
bool emptyStack(STACK* stack);
bool fullStack(STACK* stack);
int stackCount(STACK* stack);
void destroyStack(STACK* stack);
