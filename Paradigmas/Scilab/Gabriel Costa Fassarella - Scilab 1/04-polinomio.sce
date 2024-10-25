// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
//
// Para executar desde o editor SciNotes:   < Ctrl >< E >
//
// ======> Assunto: Polinomios ==================

clc; clear;      
mprintf("UENF - Ciencia da Computacao\n");
printf("Aluno: Gabreil Costa Fassarella - Campos, RJ - %s", date());


p = poly([1 3],'x')   // polinomio em x com duas raizes p(x)=(x-1)(x-3)      
q = poly([2 -1 0],'s')  //  q(s) = (s-2)(s+1)s   ; tres raizes 2,-1,0

t= poly([ 2 3 4],'x','c') // polinomio com coeficientes 2, 3 e 4

raizesq = roots(q)    // raizes do polinomio q


disp("Execução terminada...");
