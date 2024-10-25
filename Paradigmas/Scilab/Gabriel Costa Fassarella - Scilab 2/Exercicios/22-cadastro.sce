// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto: Programacao: Formulario de Entrada de dados ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella';  // <============ Nome do aluno


txt=['Produto: ';'Valor: ']; 
produto=x_mdialog(['Cadastro';],txt,['1';'1']); 

n1=produto(1);   // strings convertidos em numeros
n2=evstr(produto(2)); 

messagebox('Cadastro feito com sucesso!');
