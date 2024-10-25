// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
//
// Para executar desde o editor SciNotes:   < Ctrl >< E >
//
// ======> Assunto:  MATRIZES ==================

clc; clear;      
mprintf('UENF - Ciencia da Computacao\n');
printf("Aluno: Gabriel Costa Fassarella Campos %s ", date());

coef = [5 0 2 -7];

p = poly(coef, 't', 'coeff');

disp(p);
