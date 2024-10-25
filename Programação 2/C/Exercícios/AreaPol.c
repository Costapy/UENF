#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define pi 3.14159265

typedef struct pont {
    int x, y;
    float ang;
} stpont;

typedef struct vetpont {
    int n;
    stpont *v;
} stvet;


void MostraPol(stvet *vet) {
    int i;

    printf("\n Poligono \n");
    for (i = 0; i < vet->n; i++) {
    printf("(%d, %d), %5.2f ", vet->v[i].x, vet->v[i].y, vet->v[i].ang);
  }

}

stpont *vetorPontos(int n) {
  int i;

  stpont *v = (stpont *)malloc(n * sizeof(stpont));

  srand(time(NULL));
  for (i = 0; i < n; i++) {
    v[i].x = rand() % 100;
    v[i].y = rand() % 100;
    v[i].ang = 0.0f;
  }

  return (v);
}

void CalcMed(stvet *v) {
    int i, somax = 0, somay = 0;
    float medx, medy;

    for(i=0; i< v->n; i++) {
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
    int xx, yy;
    float h;

    for(i=0; i<v->n; i++) {
        xx = v->v[i].x;
        yy = v->v[i].y;
        h = (float)sqrt((double)(xx*xx + yy*yy)); 
        v->v[i].ang = (float)acos((double)((xx/h)));
        if(xx < 0) {
            if(yy >= 0) {
                v->v[i].ang = (3*pi)/2 - v->v[i].ang;
            }

            else {
                v->v[i].ang = 2*pi - v->v[i].ang;
            }
        }

        else {
            if(yy < 0) {
                v->v[i].ang = 2*pi - v->v[i].ang;
            }
        }
        v->v[i].ang *= 180/pi;
    }

}

int PosCerta(stvet *v, int a, int b) {
    float piv = v->v[a].ang;
    a++;

    while(a <= b) {
        while(piv >= v->v[a].ang) {
            a++;
        }

        while(piv < v->v[b].ang) {
            b--;
        }

        if(a < b) {
            float temp = v->v[a].x;
	        v->v[a].x = v->v[b].x;
	        v->v[b].x = temp;
            temp = v->v[a].y;
	        v->v[a].y = v->v[b].y;
	        v->v[b].y = temp;
            temp = v->v[a].ang;
	        v->v[a].ang = v->v[b].ang;
	        v->v[b].ang = temp;
        }
    }
    return b;

}

void OrgPoli(stvet *v, int a, int b) {
    int h;

    h = PosCerta(v, a, b);
    float temp = v->v[a].x;
	v->v[a].x = v->v[h].x;
	v->v[h].x = temp;
    temp = v->v[a].y;
	v->v[a].y = v->v[h].y;
	v->v[h].y = temp;
    temp = v->v[a].ang;
	v->v[a].ang = v->v[h].ang;
	v->v[h].ang = temp;

    if((h-1) > 0) {
        OrgPoli(v, a, h-1);
    }

    if((h+1) < b) {
        OrgPoli(v, h+1, b);
    }
}

float CalcArea(stvet *vet) {
    float area = 0;
    int i, ii;

    for(i=0; i<vet->n; i++) {
        ii = (i+1)%(vet->n);
        area += ((vet->v[ii].x - vet->v[i].x) * (vet->v[ii].y + vet->v[i].y))/2.0;
    }

    return(abs(area));
}


int main() {
    stvet vp;
    int i, b;
    float a;

    printf("\nDeseja quantos pontos? ");
    scanf("%d", &vp.n);

    //gerando pontos
    vp.v = vetorPontos(vp.n);

    //mostrar polig
    MostraPol(&vp);

    //calcular ang
    CalcMed(&vp);

    CalcAng(&vp);

    //org polig

    b = vp.n - 1;
    OrgPoli(&vp, 0, b);
    
    MostraPol(&vp);

    //calc area

    a = CalcArea(&vp);

    free(vp.v);

    printf("\n Area: %6.2f\n", &a);

    return 0;
}