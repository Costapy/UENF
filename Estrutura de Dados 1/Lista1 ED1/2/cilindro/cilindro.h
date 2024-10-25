typedef struct cilindro Cilindro;

Cilindro* cria_cilindro(float pos, float raio, float altura);

void mudar_dados(Cilindro* c, float pos, float raio, float altura);

double area(Cilindro *c);

double vol(Cilindro *c);

void limpar(Cilindro *c);


