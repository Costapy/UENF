// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
//
// Para executar desde o editor SciNotes:   < Ctrl >< L >
//
// ======> Assunto:  VETORES ==================

clc; clear;      
mprintf('\n UENF-CCT-LCMAT-Ciencia da Computacao\n');
printf(" Aluno: Gabriel Costa Fassarella %s\n\n", date());

x = int(10*rand(1, 5));
l1 = x.^2;
l2 = x.^3;
l3 = x*13;


M = [x; l1; l2; l3]
disp(M); 
