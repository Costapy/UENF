#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CalcPos(int *vet, int a, int i) {
    
    while(i > 0) {
        if(vet[i-1] > a) {
            vet[i] = vet[i-1];
            i--;
        }

        else {
            break;
        }
    }
    return (i);
}

void MostraVet(int n, int *vet) {
    int i;

    printf("\n-------------------VETOR--------------------\n");
    for(i=0; i<n; i++) {
        printf("[%d] ", vet[i]);
    }
}

int BuscaBin(int *vet, int n, int val) {
    int cont = 0, i, piv, a, b;

    piv = n/2;
    a = piv - 1;
    b = piv + 1;
    if(vet[piv] == val) {
        cont++;
    }

    while(a > 0 && b < n) {
        while(a >= 0) {
            if(vet[a] == val) {
                cont++;
            }
            a--;
        }

        while(b <= n) {
            if(vet[b] == val) {
                cont++;
            }
            b++; 
        }
    }
    return(cont);
}

int main() {
    int *vet, n, i, a, h, val, pos;

    printf("Tamanho do Vetor: ");
    scanf("%d", &n);

    vet = (int *) malloc(n*sizeof(int));
    if(vet == NULL) {
        printf("\nErro na alocação de dados...\n");
        exit(1);
    }
    
    srand(time(NULL));
    for(i=0; i<n; i++) {
        a = rand()%10;
        h = CalcPos(vet, a, i);
        vet[h] = a;
    }

    MostraVet(n, vet);

    printf("\nValor a ser buscado: ");
    scanf("%d", &val);

    pos = BuscaBin(vet, n, val);

    free(vet);

    printf("\nO valor %d aparece %d vezes\n", val, pos);

    return 0;
}