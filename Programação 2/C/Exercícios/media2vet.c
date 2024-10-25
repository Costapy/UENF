#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ShowAr(int *v, int r) {
    int i;

    printf("\n===================ARRAY==================\n");
    for(i=0; i<r; i++) {
        printf("[%d] ", v[i]);
    }
}

void LoadData(int *v, int r) {
    int i;

    srand(time(NULL));
    for(i=0; i<r; i++) {
        v[i] = rand()%10;
    }
}

int ValPos(int *v, int a, int b) {
    int piv = v[a];
    a++;

    while (a <= b) {
        while(piv >= v[a]) {
            a++;
        }
        
        while (piv < v[b]) {
            b--;
        }
        
        if(a < b) {
            int temp = v[a];
            v[a] = v[b];
            v[b] = temp;
        }
    }
    return b;
}

void QuickSort(int *v, int a, int b) {
    int h;

    h = ValPos(v, a, b);
    int temp = v[a];
    v[a] = v[h];
    v[h] = temp;

    if((h-1) > a) {
        QuickSort(v, a, h-1);
    }

    if((h+1) < b) {
        QuickSort(v, h+1, b);
    }
}

void Merge(int *v1, int *v2, int *v3, int n, int m, int q) {
    int i, j, k;
    j = 0;
    k = 0;

    for(i=0; i<q; i++) {
        if(j < n && k < m) {
            if(v1[j] < v2[k]) {
                v3[i] = v1[j];
                j++;
            }

            else {
                v3[i] = v2[k];
                k++;
            }
        }
        else {
            if(j < n) {
                v3[i] = v1[j];
                j++;
            }

            if(k < m) {
                v3[i] = v2[k];
                k++;
            }
        }
    }
}

float Median(int *v, int r) {
    int i, sum = 0;

    for(i=0; i<r; i++) {
        sum += v[i];
    }

    return(sum/r);
}

int main() {
    int *v1, *v2, *v3, n, m, q;
    float med;

    printf("\n  Vet Range: ");
    scanf("%d %d", &n, &m);

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
    
    q = m + n;

    v3 = (int *) malloc(q*sizeof(int));
        if(v3 == NULL) {
        printf("\nErro na alocação de dados...\n");
        exit(1);
    }

    LoadData(v1, n);
    LoadData(v2, m);

    QuickSort(v1, 0, n-1);
    ShowAr(v1, n);

    QuickSort(v2, 0, m-1);
    ShowAr(v2, m);

    Merge(v1, v2, v3, n, m, q);
    ShowAr(v3, q);

    med = Median(v3, q);
    printf("\n Median: %f \n", med);

    free(v3);
    free(v2);
    free(v1);

    return 0;
}