// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  GUI - Menus  e Submenus Interativos ==================

// Observe as opçoes do MENU PRINCIPAL da JANELA de COMANDOS..................

clear; clc;
Aluno = 'Gabriel Costa Fassarella';    // Incluir seu NOME aqui


h = figure('position', [150 150 600 600], ...
           'backgroundcolor', [1 0.97 0.8], ...
           "figure_name", "UENF "+Aluno);
           
 

function graficar3d()
   delete(gca());
   x = 0:0.1:2*%pi;
   y = 0:0.1:2*%pi;

   z = tan(x')*sin(2*y)
   plot3d(x,y, z);
   xtitle('Gráfico 3D');
   telaUsada =1; 
endfunction;

function graficar3d_1()
   delete(gca());
   x = 0:0.1:2*%pi;
   y = 0:0.1:2*%pi;
   z = sin(7*x') * 3*y 
   plot3d(x,y,z);
   xtitle('Gráfico 3D');
   telaUsada =1; 
endfunction;

function graficar2d()
   delete(gca()); 
   a = 0:0.1:2*%pi;
   plot(a,cos(a^2),a,sin(a/4));
   xtitle('Gráfico 2D');
   telaUsada =1;
endfunction;

function ASCV_Sobre()
	msg = msprintf(gettext(" Interface desenvolvida na UENF (CCT - LCMAT - CC)"...
                             +"\nAutor: Prof. Ausberto S. Castro Vera,"...
                             +"\nCopyright (C) 2008-2023 ASCV-UENF "));
	messagebox(msg, gettext("Autor"), "info", "modal");
endfunction

toolbar(h.figure_id,'off');

	delmenu(h.figure_id,gettext("&File"));
	delmenu(h.figure_id,gettext("&Tools"));
	delmenu(h.figure_id,gettext("&Edit"));
	delmenu(h.figure_id,gettext("&?"));
	toolbar(h.figure_id,"off");

	hop1 = uimenu("parent",h, "label",gettext("Arquivo"));
	hop2 = uimenu("parent",h, "label",gettext("Graficos"));
	hop3 = uimenu("parent",h, "label",gettext("Sobre"));
	
	uimenu("parent",hop1, "label",gettext("Fechar"), "callback", "close(h)");

	uimenu("parent",hop2, "label",gettext("Grafico 1"), "callback", "graficar3d()");	
	uimenu("parent",hop2, "label",gettext("Grafico 2"), "callback", "graficar2d()");	
    uimenu("parent",hop2, "label",gettext("Graficos 3"), "callback", "graficar3d_1()");	

	uimenu("parent",hop3, "label",gettext("Autor da Interface"), "callback","ASCV_Sobre();");
