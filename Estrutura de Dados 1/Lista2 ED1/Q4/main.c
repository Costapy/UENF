#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fila.h"
#include <string.h>
#define MAX 26

int main()
{
    char line[500];
    char fileID[500];
    char *firstLetter;
    char *data;
    int queue_index;
    FILE* fpIn;
    QUEUE *queue[MAX];

    printf("Type file ID: ");
    scanf("%s", fileID);

    fpIn = fopen(fileID, "r");
    if(!fpIn)
    {
       printf("Can't find the %s", fileID);
       exit(-1);
    }

   for(int i=0; i < MAX; i++)
   {
        firstLetter = i + 'a';
        queue[i] = createQueue(&firstLetter);
   }

    while (fgets(line, sizeof(line), fpIn) != NULL) {
        char* getWord = strtok(line, " ");

        while (getWord != NULL) {

            queue_index = findIndex(&getWord[0]);

            if(queue_index != -1)
            {
                enqueue(queue[queue_index], &getWord);
            }

            getWord = strtok(NULL, " ");
        }
    }

    fclose(fpIn);


    for(int i=0; i<MAX; i++)
    {
        printf("FILA %C: ", i + 'a');
        showQueue(queue[i]);
    }

}



