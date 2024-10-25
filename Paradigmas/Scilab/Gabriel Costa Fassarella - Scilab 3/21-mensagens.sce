// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto: Programacao: GUI - Entrada de Dados ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella';

r = messagebox([Aluno+', voce esta com Notas muito baixas...'; ' ';
             'Precisa de outra prova?'], "Prof. Ausberto Castro - UENF", "info",["Não","Sim"], "modal");

if r ==2 then
  messagebox('A Prova de RECUPERAÇÃO é na próxima Quinta-feira', "Mensagem do Professor");
  else messagebox('Que pena!, '+Aluno+' ... era uma segunda oportunidade!', "Mensagem do Professor");

end;


