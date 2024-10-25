#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "cilindro.h"

struct cilindro{
    float pos;
    float raio;
    float altura;
};

Cilindro* cria_cilindro(float pos, float raio, float altura)
{
    Cilindro* c = (Cilindro*)malloc(sizeof(Cilindro)); //alocação dinâmica por malloc

    if(c == NULL)
    {
        printf("\nERROR: problema na alocacao de memoria");
        exit(1);
    }

    //aloca os valores na variável struct
    c->pos = pos;
    c->raio = raio;
    c->altura = altura;

    return c;
}

void mudar_dados(Cilindro* c, float pos, float raio, float altura)
{
    if(c == NULL)
    {
        printf("\nERROR: problema na alocacao de memoria");
        exit(1);
    }

    //aloca novos valores
    c->pos = pos;
    c->raio = raio;
    c->altura = altura;
}

double area(Cilindro *c)
{
    if(c == NULL)
    {
        printf("\nERROR: problema na alocacao de memoria...");
        exit(1);
    }

    //calcula a área
     return 2*3.14*c->raio * (c->raio + c->altura) ;
}

double vol(Cilindro *c)
{
    if(c == NULL)
    {
        printf("\nERROR: Problema na alocacao de memoria");
        exit(1);
    }

    //calcula volume
    return c->raio*c->raio*M_PI*c->altura;
}

void limpar(Cilindro *c)
{
    //libera memória
    free(c);
}



