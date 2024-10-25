// Prof. Ausberto S. Castro Vera 
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Programacao: FOR ==================

clc;    
mprintf("UENF - Ciencia da Computacao\n");
printf(" Aluno: Gabriel Costa Fassarella - Campos %s\n", date());

N = input("Valor de N: ")
X = input("Valor de X: ")

soma = 0
for i = 1:N
    soma = soma + X
    X = X + 1
end

disp("A soma dos N números inteiros consecutivos a partir de X é: " + string(soma))

