// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
// 
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Programacao: GRAFICOS I ==================
clear; clc; 

// propriedades da figura
f=gcf();
// --------------------------------- altere a próxima linha com seu nome:
f.figure_name='UENF - Paradigmas Scilab - 2023 - Gabriel Costa Fassarella';

// propriedades dos eixos
da=gca(); // 
da.title.font_foreground = 5;    // 5=vermelho
da.title.font_size = 5;
                                        // substituido por xtitle acima
da.title.text="Titulo do Grafico: y = 8sen(x) - sen(8x)";     
da.x_label.text="Eixo X"; 
da.y_label.text="valor de y = f(x) "; 
da.x_location='middle';  
da.y_location='middle';

//----------------------------------------------------------
x = -%pi:0.1:%pi;  // Desde -Pi ate Pi com intervalo de 0.1
f = 8*sin(x) - sin(8.*x);
plot(x,f,'b')
//----------------------------------------------------------
// Obs. Capture somente a janela gráfica, para o arquivo da prática
