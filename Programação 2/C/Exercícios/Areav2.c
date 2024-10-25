#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define pi 3.14159265

typedef struct pont {
    int x, y;
    float a;
} stpt;

typedef struct vetpt {
    int n;
    stpt *v;
} stvet;

stpt *vetorPontos(int n) {
  int i;

  stpt *v = (stpt *)malloc(n * sizeof(stpt));

  srand(time(NULL));
  for (i = 0; i < n; i++) {
    v[i].x = rand() % 100; 
    v[i].y = rand() % 100;
    v[i].a = 0.0f;
  }

  return (v);
}

void MostraVet(stvet *v) {
    int i;

    for(i=0; i<v->n; i++) {
        printf(" (%d, %d) %5.2f", v->v[i].x, v->v[i].y, v->v[i].a);
    }
    printf("\n");
}

void CalcMed(stvet *v) {
    int i, somax = 0, somay = 0;
    float medx, medy;

    for(i=0; i<v->n; i++) {
        somax += v->v[i].x;
        somay += v->v[i].y;
    }
    medx = somax/v->n;
    medy = somay/v->n;

    for(i=0; i<v->n; i++) {
        v->v[i].x -= medx;
        v->v[i].y -= medy;
    }
}

void CalcAng(stvet *v) {
    int i;
    float h;

    for(i=0; i<v->n; i++) {
        int xx = v->v[i].x;
        int yy = v->v[i].y;
        h = (float)sqrt((double)(xx*xx + yy*yy)); 
        v->v[i].a = (float)acos((double)((xx/h)));
        
        if(xx < 0) {
            if(yy > 0) {
                v->v[i].a = (3*pi)/2 - v->v[i].a;
            }

            else {
                v->v[i].a = 2*pi - v->v[i].a;
            }
        }

        else {
            if(yy < 0) {
                v->v[i].a = 2*pi - v->v[i].a;
            }
        }
        v->v[i].a *= 180/pi;
    }
}

void OrgVet(stvet *v) {
    int i, j;

    for(i=0; i<v->n; i++) {
        for(j=0; j<v->n; j++) {
            if(v->v[i].a < v->v[j].a) {
                float temp = v->v[i].a;
                v->v[i].a = v->v[j].a;
                v->v[j].a = temp;
                temp = v->v[i].x;
                v->v[i].x = v->v[j].x;
                v->v[j].x = temp;
                temp = v->v[i].y;
                v->v[i].y = v->v[j].y;
                v->v[j].y = temp;
            }
        }
    }
}

float calcArea(stvet *vet) {
  float area = 0;
  int ii, i;


  for(i=0; i<vet->n; i++) {
    ii = (i+1)%(vet->n);
    area += ((vet->v[ii].x - vet->v[i].x) * (vet->v[ii].y + vet->v[i].y))/2.0;
  }
  return(abs(area));
}

int main() {
    stvet vp;
    int i;
    float a;

    printf("\nQuantidade de Pontos: ");
    scanf("%d", &vp.n);

    vp.v = vetorPontos(vp.n);

    CalcMed(&vp);

    CalcAng(&vp);

    MostraVet(&vp);

    OrgVet(&vp);

    MostraVet(&vp);

    a = calcArea(&vp);

    printf("\nArea: %6.2f", a);

    free(&vp.v);

    return 0;
}