// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto: SINAIS   =============================

clear; clc;
Aluno = 'Gabriel Costa Fassarella' ;


function ASCV_Sobre()
	msg = msprintf(gettext(" Interface desenvolvida na UENF (CCT - LCMAT - CC)"..
                          +"\nAutor: Prof. Ausberto S. Castro Vera,"..
                          +"\nCopyright (C) 2008-2023 ASCV-UENF "));
	messagebox(msg, gettext("Autor"), "info", "modal");
endfunction

t=0:0.01:2;    // tempo

fig1=scf(1);
clf;

//------------------------ Sinal 1 ------------------------------
f=1;   // Frequencia
A = 1; // Amplitude
sinal1 = A*sin(2*%pi*f*t);
subplot(211);
plot(t, sinal1, "magenta");
a=get("current_axes");
a.axes_visible="on";
a.grid=[2,2];
a.box="off";
a.grid=[1 6 3];
xtitle('SINAL A : sin(2*Pi*f*t)');
h1=gcf();
h1.figure_name='UENF Telecomunicações: Sinais Analogicos - '+Aluno;
h1.position =[200 200 630 600];

	// Remove menus originais do Scilab
	delmenu(h1.figure_id,gettext("&File"));
	delmenu(h1.figure_id,gettext("&Tools"));
	delmenu(h1.figure_id,gettext("&Edit"));
	delmenu(h1.figure_id,gettext("&?"));
    toolbar(h1.figure_id,'off');

	// Novas opcoes de menu
	hop1 = uimenu("parent",h1, "label",gettext("Arquivo"));
	hop2 = uimenu("parent",h1, "label",gettext("Sobre"));
	
	// Menu: Arquivo (remover janela grafica)
	uimenu("parent",hop1, "label",gettext("Fechar"), "callback", "close(h1)");
	
	// Menu: Sobre
	uimenu("parent",hop2, "label",gettext("Autor da Interface"), "callback","ASCV_Sobre();");
	// Sleep to guarantee a better display (avoiding to see a sequential display)
	sleep(500);
//-------------------------- Sinal 2 ----------------------------

f=3;   // Frequencia
A=1/3; // Amplitude
sinal2 = A*sin(2*%pi*f*t);
subplot(212);
plot(t, sinal2, "blue");
a=get("current_axes");
a.axes_visible="on";
a.grid=[2,2];
a.box="off";
a.grid=[1 6 3];
xtitle('SINAL B: (1/3)*sin(2*Pi*f*t)');

//--------------------- Sinal 1 + Sinal 2 ---------------------------------
fig2=scf(2);
sinal3 = (4/%pi)*(sinal1 + sinal2);
plot(t, sinal3, "red");
g=gcf();
g.figure_name='UENF 2023-ASCV - Composição de Sinais Analogicos - '+Aluno;
g.position =[600 200 630 520];

	// Remove menus originais do Scilab
	delmenu(g.figure_id,gettext("&File"));
	delmenu(g.figure_id,gettext("&Tools"));
	delmenu(g.figure_id,gettext("&Edit"));
	delmenu(g.figure_id,gettext("&?"));
    toolbar(g.figure_id,'off');

a=get("current_axes");
a.axes_visible="on";
a.grid=[2,2];
a.box="off";
a.grid=[1 6 3];
xtitle('SINAL A + B : (4/Pi)[sin(2*Pi*f*t) + (1/3)*sin(2*Pi*f*t)]');


disp('Execução terminada...!')    //  mensagem para a janela de comandos!!!




