// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto: Programacao: Formulario de Entrada de dados ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella';  // <============ Nome do aluno


txt=['X = ';'Y = ']; 
val=x_mdialog(['Multiplicação';],txt,['1';'1']); 

n1=evstr(val(1));   // strings convertidos em numeros
n2=evstr(val(2)); 

operacao = n1*n2

messagebox('x*y = '+string(operacao));


