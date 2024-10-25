#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int array[50000], i, r, j, key;
    int comp = 0, atrib = 0;

    //printf("\nTamanho do vetor: "); //definindo tamanho do vetor
    //scanf("%d", &r);

    //array = (int *) malloc(r*sizeof(int)); //alocação dinâmica por malloc 
    //if (array == NULL) {
        //printf("\nErro na alocação de dados...\n");
        //exit(1);
    //}

    srand(time(NULL));
    for(i=0; i<50000; i++) { //inserindo valores
        array[i] = rand()%100;
    }
    printf("\n");

    for(i=1; i<50000; i++) { //deslocando no vetor de 1 -> range
        key = array[i]; //valor que desejo saber a posição
        j = i;
        while(j > 0 && array[j-1] > key){ //verificando se j > 0 para não sair do range, e se os valores anteriores são maiores que a key
            comp++;
            array[j] = array[j-1]; //desloca o valor 
            atrib++;
            j--;
            }
        array[j] = key; //posição de key encontrada
        atrib++;
    }
    
    
	printf("atrib = %d comp = %d", atrib, comp);

    return 0;
}
