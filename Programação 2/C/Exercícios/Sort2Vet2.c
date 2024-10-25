#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GeraVet(int *v, int l) {
    int i;

    srand(time(NULL));
    for(i=0; i<l; i++) {
        v[i] = rand()%100; 
    }
}

void MostraVet(int *v, int l) {
    int i;

    printf("\n------------------------VETOR----------------------\n");
    for(i=0; i<l; i++) {
        printf("[%d] ", v[i]);
    }
    printf("\n");
}

int Pos(int *v, int a, int b) {
    int piv;

    piv = v[a];
    a++;

    while (a <= b) {
        while(piv >= v[a]) {
            a++;
        }

        while (piv < v[b]) {
            b--;
        }
        if (a < b) {
            int temp = v[a];
            v[a] = v[b];
            v[b] = temp;
        }
    }
    return(b);
}

void OrdVet(int *v, int a, int b) {
    int k;

    k = Pos(v, a ,b);
    int temp = v[a];
    v[a] = v[k];
    v[k] = temp;

    if(k-1 > a) {
        OrdVet(v, a, k-1);
    }

    if(k+1 < b) {
        OrdVet(v, k+1, b);
    }
}

void GeraVet3(int *v1, int *v2, int *v3, int q, int n, int m) {
    int b = 0, a = 0, i;

    for(i=0; i<q; i++) {
        if(a < n && b < m ) {
            if(v1[a] < v2[b]) {
                v3[i] = v1[a];
                a++; 
            }

            else {
                v3[i] = v2[b];
                b++;
            }
        }

        else {
            if(a < n) {
                v3[i] = v1[a];
                a++;   
            }

            if(b < m) {
                v3[i] = v2[b];
                b++;    
            }
        } 
    }
}

int main() {
    int *v1, *v2, *v3, n, m, q;

    printf("\nTamanho Vetor 1: ");
    scanf("%d", &n);

    printf("\nTamanho Vetor 2: ");
    scanf("%d", &m);

    v1 = (int *) malloc(n*sizeof(int));
    if (v1 == NULL) {
        printf("\nErro na alocação de dados...\n");
        exit(1);
    }

    v2 = (int *) malloc(m*sizeof(int));
    if (v2 == NULL) {
        printf("\nErro na alocação de dados...\n");
        exit(1);
    }

    q = m + n;

    v3 = (int *) malloc(q*sizeof(int));
    if (v3 == NULL) {
        printf("\nErro na alocação de dados...\n");
        exit(1);
    } 

    GeraVet(v1, n);
    GeraVet(v2, m);

    OrdVet(v1, 0, n-1);
    OrdVet(v2, 0, m-1);

    MostraVet(v1, n);
    MostraVet(v2, m);

    GeraVet3(v1, v2, v3, q, n, m);
    MostraVet(v3, q);

    free(v1);
    free(v2);
    free(v3);

    return 0;
}