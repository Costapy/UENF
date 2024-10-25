#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "static_stack.h"


typedef struct stack{
    int data[MAX];
    int count;
}STACK;

STACK* createStack(void)
{
    STACK *stack;

    stack = (STACK*)malloc(sizeof(STACK));

    if(stack){
        stack->count = 0;
        return stack;
    }

}

void destroyStack(STACK* stack){
    free(stack);
}

int stackCount(STACK* stack)
{
    return (stack==NULL) ? -1 : stack->count;
}

bool fullStack(STACK* stack)
{
    if(stack == NULL)
    {
        return true;
        exit(200);
    }

    return (stack->count == MAX);
}

bool emptyStack(STACK *stack)
{
    if(stack != NULL)
    {
        return (stack->count == 0);
    }
    else{
        return false;
    }
}


bool pushStack(STACK* stack, int num)
{
    if(stack != NULL && stack->count != MAX)
    {
        stack->data[stack->count] = num;
        (stack->count)++;
       // printf("Adicionado");
        return true;
    }

    printf("Pilha vazia ou ao limite. Impossivel adicionar elementos\n");
    return false;
}

int popStack(STACK *stack)
{
    int value;
    if(stack != NULL && stack->count != 0)
    {
        value = stack->data[stack->count-1];
        (stack->count)--;
        return value;
    }
    else{
        printf("pilha esta vazia. Sem elementos a remover\n");
        return -1;
    }
}

int stackTop(STACK* stack)
{
    if(stack != NULL && stack->count != 0)
    {
        return stack->data[stack->count];
    }
    else{
        printf("Pilha esta vazia. Sem elemento para mostrar\n");
        return -1;
    }
}





