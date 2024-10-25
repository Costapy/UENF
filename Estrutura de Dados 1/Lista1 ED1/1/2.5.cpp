#include <stdio.h>
#include <stdlib.h>

struct St_Dados { //criando os structs
    char nome[40];
    float sal;
    
    struct St_Nascimento {
        int ano;
        int mes;
        int dia;
    } dt_nascimento;
};




int main() {
    struct St_Dados *p;
    
    p = (struct St_Dados *) malloc(sizeof(struct St_Dados)); //realizando alocação dinâmica
    
    printf("\n Nome: "); //lendo nome
    scanf("%s", &p->nome);
    
    printf("\n Salario: "); //lendo salário
    scanf("%f", &p->sal);
    
    printf("\n Data de nascimento: "); //lendo data de nascimento
    scanf("%d%d%d", &p->dt_nascimento.dia, &p->dt_nascimento.mes, &p->dt_nascimento.ano);
    
    printf("\n===== Dados digitados ===="); //mostrando valores
    printf("\nNome = %s", p->nome);
    printf("\nSalario = %f", p->sal);
    printf("\nNascimento = %d/%d/%d\n", p->dt_nascimento.dia, p->dt_nascimento.mes, p->dt_nascimento.ano);
	
	return 0;
}
