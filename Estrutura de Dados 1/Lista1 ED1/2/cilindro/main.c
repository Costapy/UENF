#include <stdio.h>
#include <stdlib.h>
#include "cilindro.h"

int main()
{
    float a, v;

    Cilindro *ci;

    ci = cria_cilindro(10, 3, 2.5); //chama funções
    a = area(ci);
    v = vol(ci);

    printf("\n%f m^2", a);
    printf("\n%f m^3", v);

    mudar_dados(ci, 6, 13.2, 11);

    a = area(ci);
    v = vol(ci);

    printf("\n-------------\n");

    printf("\n%f m^2", a);
    printf("\n%f m^3", v);

    limpar(ci);
}
