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
h = figure('position', [150 150 600 600], ...    // [ x y larguraJanela alturaJanela]
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
// Estilo Texto

// Titulo do quadro UIC:  um texto;     Posicao (x,y)  esquina inferior esquerda
uicontrol(h,'style', "text", ...
            'string', ' UICONTROL Style 2023 ', ...
            'position', [150 550 320 40], ...    // [ x y w h]  w=larguraUIC   h=alturaUIC
            'backgroundcolor', [0.5 0.8 0.5], ...
            'fontsize', 30);
//-----------------------------------------------------------------------------
// Estilo EDIT                  
T20 = uicontrol(h, 'style', 'text',...
                  'fontsize', 15, ...              
                  'string', 'Estilo EDIT:  Para editar um texto qualquer:', ...
                  'position', [20 460 310 50], ...    
                  'Foregroundcolor', [1 0 0], ...
                  'backgroundcolor', [0.5 0.8 0.5]);
T21 = uicontrol(h, 'style', 'edit', ...
                  'string', ' Escreva aqui algum texto', ...
                  'position', [320 470 250 30], ...
                  'fontsize', 15, ...
                  'backgroundcolor', [1 1 1]);


//-----------------------------------------------------------------------------
function ASCV_Sobre()
	msg = msprintf(gettext(" Interface desenvolvida na UENF (CCT - LCMAT - CC).\nAutor: Prof. Ausberto S. Castro Vera"));
	messagebox(msg, gettext("Autor"), "info", "modal");
endfunction

    

T71 = uicontrol(h, "Position", [200 20 250 30], ...
    "Style", "pushbutton", ...
    "String", "SAIR desta Aplicação", ...
    "FontWeight", "bold", ...
    "FontSize", 20, ...
    "Callback", "close(h)");









