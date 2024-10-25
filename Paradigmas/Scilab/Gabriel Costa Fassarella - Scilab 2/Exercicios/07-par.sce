// Prof. Ausberto S. Castro Vera 
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Programacao:  IF-THEN-ELSE ================

clc;
mprintf("\n UENF-CCT-LCMAT-Ciencia da Computacao\n");
printf(" Aluno: Gabriel Costa Fassarella - Campos %s\n\n", date());

n = input("Digite um numero: ")

if modulo(n, 2) == 0 then
    printf("E par");
end

else printf("Nao e par");
