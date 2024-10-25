#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main()
{
    STACK* stack;
    int *data;
    bool done;

    stack = createStack();

    while(!done){
        data = (int*)malloc(sizeof(int));
        printf("Type a inter value [-1 to finish] \n");
        scanf("%d", data);
        if(fullStack(stack) || *data == -1)
        {
            done = true;
        }
        else {
            pushStack(stack, data);

        }
    }

    while(!emptyStack(stack))
    {
        data = popStack(stack);
        printf("%d\n", *data);
    }
}
