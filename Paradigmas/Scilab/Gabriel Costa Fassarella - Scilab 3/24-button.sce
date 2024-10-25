// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  buttons ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella';

//--------------- coisas de Futebol --------------------------------------------
time=messagebox("Qual é o melhor time do Brasil?","modal", "info",['Atetico-MG' 'Fluminense' 'Flamengo' 'Internacional']);

select  time                // time e' um string
       case 1 then
          messagebox([Aluno; '     Atletico-MG 2 - 1 Santos!'],"UENF");
       case 2  then
          messagebox([Aluno; '     ACG  3 - 2  Fluminense'],"UENF");       
       case 3  then
          messagebox([Aluno; '     Flamengo  0 - 0 Internacional'],"UENF");
       case 4  then
          messagebox([Aluno; '     O Campeão Mundial 2006...'; ' ';'Esta semana: Inter 0 - 0 Flamengo'],"UENF");          
end;   //   select





