// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Equacoes (Aplicacoes) ==================
//          Resultados: Na console

clear; clc;
Aluno = 'Fulano de Tal' ;   /// <================  COMPLETAR !!!!

dt=getdate(); dd= ' ('+string(dt(7)) + ':'+string(dt(8))+')' ;
mprintf(' UENF - Ciencia da Computacao\n');
printf('  Aluno: %s - Campos, RJ/%d/%d/%d %s\n\n ', Aluno,dt(6),dt(2),dt(1),dd);


// Sistema de equações:
//    Ax + By = C
//    Dx + Ey = F

A=3 ;
B=-4 ;
C=-14 ;
D=1 ;
E=1 ;
F=7 ;

matrizcoef = [A B; D E];              // matriz de coeficientes
vet = [C F]';                          // vetor coluna

k = det(matrizcoef);                   // determinante da matriz

if ( k == 0 ) then
   mprintf('O sistema não tem solução...')
   else
     solucao = inv(matrizcoef)*vet;
end;


//------------------- Resultados na Console (Shell) --------------------------
printf('\n Sistema: \n  (%.2f)X + (%.2f)Y = %.2f \n', A, B, C);
printf('  (%.2f)X + (%.2f)Y = %.2f \n', D, E, F);
printf('Solução do Sistema:  X = %.1f    Y = %.1f ', solucao(1), solucao(2));


