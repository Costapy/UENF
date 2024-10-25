// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto: GRAFICOS IV ==================
clear; clc; clf();
Aluno = 'Gabriel Costa Fassarella';  // <============ Nome do aluno

// propriedades da figura: NÃO alterar !!
dt=getdate(); dd= ' ('+string(dt(7)) + ':'+string(dt(8))+')' ;
f=figure();
// propriedades da figura
f=gcf();
f.figure_name='UENF - CCT - LCMAT - CC - 2023 - '+ Aluno + dd; 

x = 1:0.5:10;    
y1 = x;
y2 = log(x);
y3 = 2.73^x;

subplot(221);
plot(x,y1,'r');
da1=gca(); 
da1.title.font_size = 5;
da1.title.font_foreground = 5;
da1.title.text="y = x";
da1.x_label.text="Tempo"; 
da1.x_location='middle'; 
da1.y_label.text="y = x"; 

subplot(222);
plot(x,y2,'g');
da1=gca(); 
da1.title.font_size = 5;
da1.title.font_foreground = 5;
da1.title.text="y = log(x)";
da1.x_label.text="Tempo"; 
da1.x_location='middle'; 
da1.y_label.text="y = log(x)"; 

subplot(223);
plot(x,y3,'b');
da1=gca(); 
da1.title.font_size = 5;
da1.title.font_foreground = 5;
da1.title.text="y = e^x";
da1.x_label.text="Tempo"; 
da1.x_location='middle'; 
da1.y_label.text="y = e^x"; 
