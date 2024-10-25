// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
// Aluno - Gabriel Costa Fassarella
// ======> Assunto:  Programacao: GRAFICOS II ==================
clear; clc; clf();
//------------------------------------------
x = 1:0.1:50;  // 
y = x.*cos(x);
plot(x, y);
xtitle('y = xcos(x)');   // titulo do grafico
//------------------------------------------
// propriedades da figura
f=gcf();
// --------------------------------- altere a próxima linha com seu nome:
f.figure_name='UENF - Paradigmas Scilab - 2023  - Fulano da Silva';

// propriedades dos eixos
da=gca(); // 
da.title.font_size = 5;
da.title.font_foreground = 5;    // 5=vermelho
da.title.text="Titulo do Grafico";  // comentar esta linha e observar o que acontece
da.x_label.text="Tempo"; 
da.x_location='middle'; 
da.y_label.text="Valor de y  =  xcos(x)"; 


