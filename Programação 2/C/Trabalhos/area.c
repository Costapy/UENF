#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define pi 3.14159265

typedef struct pto {
  int x, y;
  float a;
} stPto;


typedef struct vetPto {
  int n;
  stPto *v;
} stVetPto;


void mostraPoligono(stVetPto *vp) {
  int i;


  printf("\n Poligono \n");
  for (i = 0; i < vp->n; i++) {
    printf("(%d, %d), %5.2f ", vp->v[i].x, vp->v[i].y, vp->v[i].a);
  }
}

stPto *vetorPontos(int n) {
  int i;


  stPto *v = (stPto *)malloc(n * sizeof(stPto));


  srand(time(NULL));
  for (i = 0; i < n; i++) {
    v[i].x = rand() % 100;
    v[i].y = rand() % 100;
    v[i].a = 0.0f;
  }


  return (v);
}


float calcArea(stVetPto *vet) {
  float area = 0;
  int ii, i;


  for(i=0; i<vet->n; i++) {
    ii = (i+1)%(vet->n);
    area += ((vet->v[ii].x - vet->v[i].x) * (vet->v[ii].y + vet->v[i].y))/2.0;
  }
  return(abs(area));
}


void CalcMed(stVetPto *vet) {
	int i, somax = 0, somay = 0;
	float medx, medy;

	for(i=0; i<vet->n; i++) {
		somax += vet->v[i].x;
		somay += vet->v[i].y;
	}
	medx = somax/vet->n;
	medy = somay/vet->n;
	
	for(i=0; i<vet->n; i++) {
		vet->v[i].x -= medx;
		vet->v[i].y -= medy; 
	}
	
}

void CalcAng(stVetPto *vet) {
	int i;
	int xx, yy;
	float h;
	
	for(i=0; i<vet->n; i++) {
		xx = vet->v[i].x;
		yy = vet->v[i].y;
		h = (float)sqrt((double)(xx*xx + yy*yy));
		vet->v[i].a = (float)acos((double)((xx/h)));
		if(xx < 0) {
			if(yy >= 0) {
                vet->v[i].a = (3*pi)/2 - vet->v[i].a; 	
            }
			else {
				vet->v[i].a = 2*pi - vet->v[i].a;
            }
		}
		else {
			if(yy < 0) {
	             vet->v[i].a = 2*pi - vet->v[i].a;
            }
        }
        vet->v[i].a *= 180/pi; 
	}
}

int Pos(stVetPto *vet, int a, int b) {
	int piv = a;
	a++;
	while(a <= b) {
		while(vet->v[piv].a >= vet->v[a].a) {
			a++;
		}	
		while(vet->v[piv].a < vet->v[b].a) {
			b--;
		}
	    if(a < b){
	
           	float temp = vet->v[a].x;
	          vet->v[a].x = vet->v[b].x;
	          vet->v[b].x = temp;
            temp = vet->v[a].y;
	          vet->v[a].y = vet->v[b].y;
	          vet->v[b].y = temp;
            temp = vet->v[a].a;
	          vet->v[a].a = vet->v[b].a;
	          vet->v[b].a = temp;
        }
	}
	return(b);
}

void OrdenaAng(stVetPto *vet, int a, int b) {
	int h;
    
	h = Pos(vet, a, b);
	float temp = vet->v[a].x;
	vet->v[a].x = vet->v[h].x;
	vet->v[h].x = temp;
  temp = vet->v[a].y;
	vet->v[a].y = vet->v[h].y;
	vet->v[h].y = temp;
  temp = vet->v[a].a;
	vet->v[a].a = vet->v[h].a;
	vet->v[h].a = temp;
	if((h-1) > a) {
        OrdenaAng(vet, a, h-1);
	} 
	if((h+1) < b) {
        OrdenaAng(vet, h+1, b);	
	}
}

int main() {
  stVetPto vp;
  float a, ang0, angn;

  printf("\nQuantidade de pontos: ");
  scanf("%d", &vp.n);


  vp.v = vetorPontos(vp.n);
  
  CalcMed(&vp);
  
  CalcAng(&vp);

  mostraPoligono(&vp);

  angn = vp.n - 1;
  OrdenaAng(&vp, 0, angn);

  mostraPoligono(&vp);
  
  a = calcArea(&vp);

  printf("\nArea: %6.2f\n", a);

  free(vp.v);

  return 0;
}