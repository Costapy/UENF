#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "static_stack.h"

int main(void)
{
    STACK *stack;
    int a;
    stack = createStack();

    emptyStack(stack);

    pushStack(stack, 5);
    pushStack(stack, 4);
    pushStack(stack, 2);

    emptyStack(stack);

   while(!emptyStack(stack))
   {
       printf("%d ",popStack(stack));
   }
}
