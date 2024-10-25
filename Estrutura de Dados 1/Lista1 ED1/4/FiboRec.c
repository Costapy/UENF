#include <stdio.h>
#include <stdlib.h>

int fibo(int n)
{
    if(n==0) //caso base (1 posição do fibonacci)
    {
        return 0;
    }

    if(n==1) //caso base (2 posição do fibonacci)
    {
        return 1;
    }

    return fibo(n-1) + fibo(n-2); //chamada recursiva da soma dos 2 valores
}

int main()
{
    fibo(50); //chamada da função com a posição desejada

//    printf("%d ", resp);
}

