#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, b, pos, resp;

    //posições iniciais do fibonacci
    a = 0; 
    b = 1;

    //posição desejada
    pos = 100;


    //printf("%d %d ", a, b);
    for(i=0; i<pos-1; i++) //deslocando até a posição desejada
    {
        resp = a + b; //calculo do novo valor
        a = b; // novos atuais valores
        b = resp;

        //printf("%d ", resp);
    }

	return 0;	
}
