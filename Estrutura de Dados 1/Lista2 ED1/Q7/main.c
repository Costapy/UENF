#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cType.h>
#include <stdbool.h>
#include "lista.h"

int main (void)
{
	LIST* list;

	list = cria_lista();

	mostra_lista(list);

	destroyList(list);
	printf("Fim da Lista...\n");
	return 0;
}
