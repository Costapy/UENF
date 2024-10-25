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

x = -5:1:5;
t = -5:1:5;
z = -5:1:5;       
y1 = 2*x.^2 + 5*x - 3;
y2 = t.^3 + 3*t + 1;
y3 = (z-2).*(z+2).*(z-5);

subplot(221);
plot(x,y1,'r');
da1=gca(); 
da1.title.font_size = 5;
da1.title.font_foreground = 5;
da1.title.text="y = 2*x.^2 + 5*x - 3";
da1.x_label.text="Tempo"; 
da1.x_location='middle'; 
da1.y_label.text="y = 2*x.^2 + 5*x - 3"; 

subplot(222);
plot(t,y2,'g');
da1=gca(); 
da1.title.font_size = 5;
da1.title.font_foreground = 5;
da1.title.text="y = t.^3 + 3*t + 1";
da1.x_label.text="Tempo"; 
da1.x_location='middle'; 
da1.y_label.text="y = t.^3 + 3*t + 1"; 

subplot(223);
plot(z,y3,'b');
da1=gca(); 
da1.title.font_size = 5;
da1.title.font_foreground = 5;
da1.title.text="y = (z-2).*(z+2).*(z-5)";
da1.x_label.text="Tempo"; 
da1.x_location='middle'; 
da1.y_label.text="y = (z-2).*(z+2).*(z-5)"; 
