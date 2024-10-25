#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int i, j, array[50000], r, atrib = 0, comp = 0;
    

    //printf("\nTamanho do array: "); //definindo tamanho do vetor
    //scanf("%d", &r);

    //array = (int *) malloc(r*sizeof(int)); //alocação dinâmica por malloc
   // if(array == NULL) {
        //printf("\nErro na alocação de dados...");
    //}

    srand(time(NULL));
    for(i=0; i<50000; i++) { //inserindo valores
        array[i] = rand()%100;
    }

    for(i=0; i<50000-1; i++) { //andando pelo vetor de range -> range - 1
        for(j=50000-1; j>i; j--) { //andando pelo vetor de range - 1 -> i
            if(array[j] < array[j-1]) { //verificando e a posição atual é menor que a anterior
                int temp = array[j]; //realizando a troca
                array[j] = array[j-1];
                array[j-1] = temp;
                atrib += 3;
            }
            comp += 1;
        }
    }

	printf("atrib = %d, comp = %d", atrib, comp);

    return 0;
}
