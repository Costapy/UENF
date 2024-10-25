// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto: Programacao: GUI - Menus Interativos ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella';

feira = ['banana', 'laranja', 'melancia', 'ovo', 'carne'];
   quant = ['1', '2','3','4','5'];
 pag = ['cartao','dinheiro','pix'];

L1=list('Produto',1, feira); 
L2=list('Quantidade',1, quant); 
L3=list('Pagamento',1,pag); 

OpMatr=x_choices([Aluno;'Escolha um produto e quantidade:'],list(L1,L2,L3)); 

messagebox([Aluno+', você escolheu o produto: '; '  '; 
'Produto: : ' + string(feira(OpMatr(1)));
'         Quantia : '+ string(quant(OpMatr(2))); 
'      Pagamento : '+ string(pag(OpMatr(3)))]);

