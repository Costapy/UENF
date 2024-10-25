#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GeraVal(int l, int *v) {
    int i;

    srand(time(NULL));
    for(i=0; i<l; i++) {
        v[i] = rand()%100; 
    } 
}

void MostraVet(int l, int *v) {
    int i;

    printf("\n-----------------------VETOR--------------------------\n");
    for(i=0; i<l; i++) {
        printf("[%d] ", v[i]);
    }
    printf("\n");
}

int BuscaPos(int *v, int a, int b) {
    int piv;

    piv = v[a];
    a++;
    while(a < b) {
        while(piv > v[a]) {
            a++;
        }

        while(piv < v[b]) {
            b--;
        }

        if(a < b) {
            int temp = v[a];
            v[a] = v[b];
            v[b] = temp;
        }
    }
    return(b);
}

void OrgVet(int *v, int a, int b) {
    int pos;

    pos = BuscaPos(v, a, b);
    int temp = v[a];
    v[a] = v[pos];
    v[pos] = temp; 

    if((pos+1) < b) {
        OrgVet(v, pos+1, b);
    }

    if((pos-1) > a) {
        OrgVet(v, a, pos-1);
    }
}

void OrgVet3(int *v1, int *v2, int *v3, int n, int m, int q) {
    int i, b = 0, a = 0;

    for(i=0; i<q; i++) {
        if((a < n) && (b < m)) {
            if(v1[a] <= v2[b]) {
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

    printf("Tamanho do vetor 1: ");
    scanf("%d", &n);

    printf("Tamanho do vetor 2: ");
    scanf("%d", &m);

    q = m+n;

    v1 = (int *) malloc(n*sizeof(int));
    if(v1 == NULL) {
        printf("\nErro na alocação de dados...\n");
        exit(1);
    }

    v2 = (int *) malloc(m*sizeof(int));
    if(v2 == NULL) {
        printf("\nErro na alocação de dados...\n");
        exit(1);
    }

    v3 = (int *) malloc(q*sizeof(int));
    if(v3 == NULL) {
        printf("\nErro na alocação de dados...\n");
        exit(1);       
    }

    GeraVal(n, v1);
    GeraVal(m, v2);

    OrgVet(v1, 0, n-1);
    OrgVet(v2, 0, m-1);

    MostraVet(n, v1);
    MostraVet(m, v2);

    OrgVet3(v1, v2, v3, n, m, q);
    MostraVet(q, v3);

    free(v1);
    free(v2);
    free(v3);

    return 0;
}