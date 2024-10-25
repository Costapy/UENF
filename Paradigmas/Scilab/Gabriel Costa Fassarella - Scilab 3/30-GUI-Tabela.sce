// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  GUI   Graphic User Interface
//      figure : cria uma figura GUI (janela Grafica)
//   uicontrol : cria um objeto GUI dentro de uma janela grafica, com varias propriedades
//    callback : executa uma instrução do Scilab (uma função, um comando, etc)

clear; clc;
Aluno = 'Prof. Ausberto Castro';
//------------------------- JANELA Principal ----------------------------------
//  Cria uma janela grafica: Comando "figure"
h = figure('position', [150 150 700 200], ...    // [ x y larguraJanela alturaJanela]
           'backgroundcolor', [0.5 0.8 0.5], ...     // [R G B]      Entre 0.0  e  1.0
           "figure_name", "UENF "+Aluno+" - Scilab GUI 2023");
//-------------------------------------------------------------------------------------

//elimina o toolbar da janela grafica
toolbar(h.figure_id,'off');

	// ------------------
	// Passo : Menu da janela Principal
	// ------------------
	
	// Remove menus originais do Scilab
	delmenu(h.figure_id,gettext("&File"));
	delmenu(h.figure_id,gettext("&Tools"));
	delmenu(h.figure_id,gettext("&Edit"));
	delmenu(h.figure_id,gettext("&?"));
	toolbar(h.figure_id,"off");

	// Novas opcoes de menu
	hop1 = uimenu("parent",h, "label",gettext("Arquivo"));
	hop2 = uimenu("parent",h, "label",gettext("Sobre"));
	
	// Menu: Arquivo (remover janela grafica)
	uimenu("parent",hop1, "label",gettext("Fechar"), "callback", "close(h)");
	
	// Menu: Sobre
	uimenu("parent",hop2, "label",gettext("Autor da Interface"), "callback","ASCV_Sobre();");
	// Sleep to guarantee a better display (avoiding to see a sequential display)
	sleep(500);



//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Include an editable table into a figure:
// Building a table of data:
menu = ["Cidade" "Pais" "População [Mh]" "Temperatura.[°C]" ];
cidades = ["Mexico" "Paris" "Tokyo" "Singapour" "Brasilia"]';
paises = ["Mexico" "France" "Japan" "Singapour" "Brasil"]';
pop  = string([22.41 11.77 33.41 4.24 3.09]');
temp = string([26 19 22 17 28]');
tabela = [menu; [ cidades paises pop temp ]]

f = gcf();
clf
as = f.axes_size;  // [width height]
ut = uicontrol("style","table",..
               "string",tabela,..
               "position",[95 as(2)-150 500 87],.. // => @top left corner of figure
               "tooltipstring","Dados das maiores cidades")

// Modify by hand some values in the table. Then get them back from the ui:
matrix(ut.string,size(tabela))

//-----------------------------------------------------------------------------
function ASCV_Sobre()
	msg = msprintf(gettext(" Interface desenvolvida na UENF (CCT - LCMAT - CC).\nAutor: Prof. Ausberto S. Castro Vera"));
	messagebox(msg, gettext("Autor"), "info", "modal");
endfunction

    

T71 = uicontrol(h, "Position", [220 25 250 35], ...
    "Style", "pushbutton", ...
    "String", "SAIR desta Aplicação", ...
    "FontWeight", "bold", ...
    "FontSize", 20, ...
    "Foregroundcolor", [0.5 0 0.5], ...
    "Callback", "close(h)");









