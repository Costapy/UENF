#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int array[50000], i, r, j, atrib = 0, comp = 0;

    //printf("\nTamanho do vetor: "); //definindo tamanho do vetor
    //scanf("%d", &r);

    //array = (int *) malloc(r*sizeof(int)); //alocação dinâmica por malloc
    //if (array == NULL) {
        //printf("\nErro na alocação de dados...\n");
        //exit(1);
    //}

    srand(time(NULL));
    for(i=0; i<50000; i++) { //iniciando valores
        array[i] = rand()%100;
    }
    printf("\n");

    for(i=0; i<50000; i++) { //deslocando de 0 -> range
        int min = i; //guardando a posição do atual menor
        for(j=i; j<50000; j++) {  //deslocando de i -> range
            if(array[j] < array[min]) { //verificando se o valor atual é menor que meu atual menor
                min = j; //guardando a posição do novo menor
            }
            comp += 1;
        }
        int temp = array[i]; //realizando a troca
        array[i] = array[min];
        array[min] = temp;
        atrib += 3;
    }
    
    printf("atrib = %d comp = %d", atrib, comp);

    return 0;
}
