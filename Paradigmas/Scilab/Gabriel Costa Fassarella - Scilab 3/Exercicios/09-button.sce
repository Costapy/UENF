// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  buttons ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella';

time=messagebox("Escolha uma refeição","modal", "info",['Pizza' 'Hamburguer' 'Arroz e Feijao' 'Salada']);

select  time
       case 1 then
          messagebox(['     Essa e uma pessima refeicao!']);
       case 2  then
          messagebox(['     Essa e uma pessima refeicao!']);       
       case 3  then
          messagebox(['     Essa e uma otima refeicao!']);
       case 4  then
          messagebox(['     Essa e uma otima refeicao!']);          
end;





