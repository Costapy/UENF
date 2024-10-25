#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "parenteses.h"

int main()
{
    STACK* stack;
    char token;
    char *dataPtr;
    char *getValue;
    char fileID[25];
    FILE* fpIn;
    int lineCount = 1;

    stack = createStack();
    printf("Type file ID for file to be parsed: ");
    scanf("%s", fileID);

    fpIn = fopen(fileID, "r");
    if(!fpIn)
    {
       printf("Can't find the %s", fileID);
       exit(-1);
    }

    getValue = (char*)malloc(sizeof(char));

    while((token = fgetc(fpIn)) != EOF)
    {

        if(token == '(' || token == '[' || token == '{')
            {
                dataPtr = (char*)malloc(sizeof(char));
                *dataPtr = token;
                pushStack(stack, dataPtr);
            }
        else{
            if(token == ')' || token == ']' || token == '}')
            {
                if(!emptyStack(stack))
                {
                    getValue = (char*)stackTop(stack);

                    if ((token == ')' && *getValue == '(') || (token == ']' && *getValue == '[') || (token == '}' && *getValue == '{'))
                        {
                            popStack(stack);
                        }
                }
                else {
                printf("ERROR: Missing opened caractere | line %d", lineCount);
                exit(-1);
                }
            }
        }
        lineCount++;
    }

    if(!emptyStack(stack))
    {
        printf("Has %d elements\n", stackCount(stack));
        printf("Missing close caractere. Line: %d", lineCount);
    }

    else
    {
        printf("Balanced caracteres");
    }

    fclose(fpIn);
    destroyStack(stack);
    free(getValue);

    return 0;
}
