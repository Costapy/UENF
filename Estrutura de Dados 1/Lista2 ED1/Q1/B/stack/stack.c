#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

typedef struct node{
    int* dataPtr;
    struct node* link;
} STACK_NODE;

typedef struct stack{
    int count;
    STACK_NODE* top;
}STACK;

STACK* createStack(void)
{
    STACK *stack;

    stack = (STACK*)malloc(sizeof(STACK));
    if(stack)
    {
        stack->count = 0;
        stack->top = NULL;
    }

    return stack;
}

bool pushStack(STACK* stack, int* dataInPtr) // Return true or false
{
    STACK_NODE* newPtr; // Creating a new poniter to a node

    newPtr = (STACK_NODE*)malloc(sizeof(STACK_NODE)); // Allocating memory to the new node
    if(!newPtr) // If it doesn't works...
    {
        return false; // return false and finish the function
    }
    newPtr->dataPtr = dataInPtr; //Linking the new data to the new Node
    newPtr->link = stack->top; // Linking NULL to the next link of newPtr
    stack->top = newPtr; // stack-top now is pointing to the address of newPtr

    (stack->count)++; // Add one to the count.
    return true;
}

int* popStack(STACK* stack)
{
    int* dataOutPtr; // Generic pointer
    STACK_NODE* temp; // A new stack_node temp

    // STATEMENTS
    if(stack->count == 0) // If count is 0
        dataOutPtr = NULL; // It'll be null
    else{
        temp = stack->top; // Copy stack->top to temp
        dataOutPtr = stack->top->dataPtr; // Get the data
        stack->top = stack->top->link; // Refresh the new first node
        free(temp); // Free the previous first node
        (stack->count)--; // reduce the count
    }
    return dataOutPtr; // return the value
}

int* stackTop (STACK* stack)
{
    if (stack->count == 0)
    {
        return NULL;
    }
    else{
        return stack->top->dataPtr;
    }
}

bool emptyStack(STACK *stack)
{
    return (stack->count == 0);
}

bool fullStack(STACK *stack)
{
    STACK_NODE *temp;

    temp = (STACK_NODE*)malloc(sizeof(*(stack->top))); // Try to allocate memory

    if(temp) // If allocate, it's because can store
    {
        free(temp);
        return false;
    }

    return true; // If malloc fails, it's full
}

int stackCount(STACK* stack)
{
    return stack->count;
}

STACK* destroyStack(STACK* stack)
{
    STACK_NODE *temp;

    if(stack)
    {
        while (stack->top != NULL)
        {
            free(stack->top->dataPtr);
            temp = stack->top;
            stack->top = stack->top->link;
            free(temp);
        }
    }

    free(stack);

    return NULL;
}





