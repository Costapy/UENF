// Prof. Ausberto S. Castro Vera 
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Programacao: FUNCOES ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella' ;   /// <================  COMPLETAR !!!!

dt=getdate(); dd= ' ('+string(dt(7)) + ':'+string(dt(8))+')' ;
mprintf('UENF - CCT - LCMAT - Ciencia da Computacao\n');

//---------------------------
function M = media(x)
   [a, tamanho] = size(x);
   soma=0;
   for i=1:tamanho
     soma = soma + x(i);
   end
   M = soma/tamanho;
endfunction
//----------------------------

function [f] =fatorial(n)
  k=int(n);
  if k<1 then
     k=1
  end;
  f=1
  for j=1:k
     f=f*j;
  end;
endfunction
//---------------------------

A = [12 68 41 34 15 26 93]
m = media(A);

printf('\n Media do Vetor A = %3.1f\n', m);
printf(' minimo do Vetor A = %3.1f\n', min(A));
printf(' Maximo do Vetor A = %3.1f\n', max(A));

f8 = fatorial(11);
printf('\n Fatorial de 11 = %d\n', f8);

printf('\n\n Aluno: %s - Campos/%d/%d/%d %s\n ', Aluno,dt(6),dt(2),dt(1),dd);
disp ('bye...');    
