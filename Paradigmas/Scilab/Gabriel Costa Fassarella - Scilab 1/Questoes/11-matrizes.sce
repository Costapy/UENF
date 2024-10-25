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

A = [1 2; 2 3];
B = [5; 8];

invA = inv(A);

X = invA*B;
disp(X);
