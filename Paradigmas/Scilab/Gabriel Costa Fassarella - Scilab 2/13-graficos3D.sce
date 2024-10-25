// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  Programacao: GRAFICOS III ==================
clear; clc; clf();
Aluno = 'Gabriel Costa Fassarella';  // <============ Nome do aluno

// propriedades da figura: NÃO alterar !!
dt=getdate(); dd= ' ('+string(dt(7)) + ':'+string(dt(8))+')' ;



// propriedades da figura
f=gcf();
f.figure_name='UENF CCT LCMAT CC - 2023 - '+ Aluno + dd;  


h=get("hdl");

//------------------- parte computacional -----------------------
x = 0:0.1:3*%pi;    // mudar o intervalo para  0.01, 0.2
y = 0:0.1:3*%pi;    //            " 
z = sin(x')*cos(y);
plot3d(x,y, z);     // graficos 3D
//---------------------------------------------------------------

f=get("current_figure");         // get the handle of the parent figure 
f.color_map=hotcolormap(12);      // muda o colormap  --> help colormap
 
xtitle('z = sin(x'')*cos(y)');   // titulo do grafico
