// Prof. Ausberto S. Castro Vera  
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  SELECT-CASE ==================
clear; clc;
Aluno = 'Fulano de Tal' ;   /// <================  COMPLETAR !!!!
dt=getdate(); dd= ' ('+string(dt(7)) + ':'+string(dt(8))+')' ;
mprintf("\n UENF-CCT-LCMAT-Ciencia da Computacao\n");


dia = 5;
printf('\n\n');
while (dia > 0 & dia < 7)
   dia = input('  Qual dia voce participou do evento de confraternização? (1-7) : ')
   select  dia
       case 1 then
           mprintf('    Foi um fim de semana ..!\n\n');
       case 2  then
          mprintf('      Foi no horario de aula ?\n\n');       
       case 3  then
          mprintf('      Foi no horario de aula ?\n\n');
       case 5  then
          mprintf('      Foi no horario de aula ?\n\n');          
       case 4  then
          mprintf('      Nao. Quarta-feira foi dia feriado\n\n') ;
       case 6  then
          mprintf('      Na Sexta Feira 13...\n\n');
       else
          break
   end;   //   select
   
end ;    //  while
printf('\n\n Aluno: %s - Campos/%d/%d/%d %s\n ', Aluno,dt(6),dt(2),dt(1),dd);
disp ('bye...');
