#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pilha.h"

int main()
{
    STACK* pilha;
    int* data;
    bool done = false;

    pilha = createStack();

    while (!done){
        data = (int*)malloc(sizeof(int));
        printf("Type a value: -1 to exit\n");
        scanf("%d", data);
        if(fullStack(pilha) || *data == -1)
            done = true;
        else{
            pushStack(pilha, data);
        }
    }
    while(!emptyStack(pilha))
        {
        data = (int*)popStack(pilha);
        printf("%d\n", *data);
        free(data);
        }
}
