#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define n 100

void Search(int *vet) {
    int i, count = 0;

    for(i=1; i<n+1; i++) {
        if(i == 1 || i == 2 || i == 3 || i == 5 || i == 7) {
            vet[count] = i;
            printf("%d ", vet[count]);
            count++;
        }

        else {
            if(i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0) {
                vet[count] = i;
                printf("%d ", vet[count]);
                count++;
            }
        }
    }
}

int main() {
    int vet[n];

    Search(&vet);

    return 0;
}