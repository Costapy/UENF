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

x = input("Valor do numero: ")

val = 1
for i = x:-1:1
    val = val * i
end

printf("Valor do fatorial: %d", val);
