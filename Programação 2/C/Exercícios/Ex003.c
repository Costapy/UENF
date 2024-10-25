#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Definindo Constantes
#define n 50

void MostrarVet(int k, int vet[n]) {
    int i;

    printf("\n---------------------VETOR----------------------\n");
    for(i=0; i<k; i++) {
        printf("[%d]", vet[i]);
    }
}

void OrgVet(int k, int vet[n]) {
    int piv, a, i, val;

    for(i=1; i<k+1; i++) {
        piv = vet[i];
        a = i;
        while(a > 0 && vet[a-1] > piv) { //Se o anterior for maior que o pivô (atual), o atual recebe o anterior
            vet[a] = vet[a-1];
            a--;
        }
        vet[a] = piv; //O anterior recebe o pivô
    }
}

int Busca(int m, int val, int vet[n]) {
    int piv, a, b, cont = 0;

    piv = m / 2;
    a = piv - 1;
    b = piv + 1;
    if(vet[piv] == val) {
        cont++;
    }
    while(a > 0 && b < m) {
        while(a >= 0) {
            if(vet[a] == val){
                cont++;
            }
            a--;
        }
        while(b <= m) {
            if(vet[b] == val) {
                cont++;
            }
            b++;
        }
    }
    return(cont);
}


int main() {
    int i, k, vet[n], val, num;

    printf("Tamanho do vetor: ");
    scanf("%d", &k);

    srand(time(NULL));
    for(i=0; i<k; i++) {
        vet[i] = rand()%10;
    }

    MostrarVet(k, vet);

    OrgVet(k, vet);
    
    MostrarVet(k, vet);

    printf("\nEscolha um valor para procurar o seu numero de ocorrencias: ");
    scanf("%d", &val);

    num = Busca(k, val, vet);

    printf("\n%d\n", num);

    return 0;
}
