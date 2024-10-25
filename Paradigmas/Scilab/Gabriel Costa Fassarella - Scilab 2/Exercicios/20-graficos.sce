// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto: GRAFICOS V ==================

clear; clc;
Aluno = 'Gabriel Costa Fassarella';
dt=getdate(); dd= ' ('+string(dt(7)) + ':'+string(dt(8))+')' ;


a=gcf();
a.figure_name='UENF -  Maio 2023 - '+ Aluno + dd;  ;

t=[%pi:0.05:4*%pi]';
f=1+sin(t/2);
g=cos(t*5);


plot2d(t , [f g]);
legends(['f=1+sin(t/2)';'g=cos(t*5)'],[1 2],opt="ur");

da=gca(); // 
da.title.font_size = 5;
da.title.font_foreground = 5;
da.title.text="Gráficos de f = f=1+sin(t/2)  e   g=cos(t*5)";
da.x_label.text="Tempo"; 
da.data_bounds=[0,0; 13,4.2]
