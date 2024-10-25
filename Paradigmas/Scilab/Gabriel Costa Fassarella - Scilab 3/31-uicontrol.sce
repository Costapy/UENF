// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  GUI   UIControl
clear; clc;
Aluno = 'Fulano de Tal';

//  Cria uma janela grafica: Comando "figure"
h = figure('position', [150 150 600 600], ...
           'backgroundcolor', [0.7 0.9 1], ...   // [R G B]      0.0 - 1.0
           "figure_name", "UENF "+Aluno);
           

//elimina o toolbar da janela grafica
toolbar(h.figure_id,'off');


// Titulo do quadro:  um texto
uicontrol(h,"style", "text", ...
            "string", " Dados de Nascimento ", ...
            "position", [155 550 300 40], ...
            "backgroundcolor", [0.7 0.9 1], ...
            "fontsize", 30);

// Ano
T1 = uicontrol(h, 'style', 'text',...
                  'string', 'Digite o ano:', ...
                  'position', [20 500 200 50], ...
                  'backgroundcolor', [0.7 0.9 1]);
E1 = uicontrol(h, 'style', 'edit', ...
                  'string', ' 2002', ...
                  'position', [150 500 70 30], ...
                  'fontsize', 15, ...
                  'backgroundcolor', [1 1 1]);

// mes
T2 = uicontrol(h, 'style', 'text', ...
                  'string', 'Selecione o mes:', ...
                  'position', [20 400 200 50], ...
                  'backgroundcolor', [0.7 0.9 1]);
E2 = uicontrol(h, 'style', 'listbox', ...
                  'position', [150 220 120 200], ...
                  'fontsize', 15, ...
                  'backgroundcolor', [1 1 1]);
set(E2, 'string', 'Janeiro | Fevereiro | Março | Abril | Maio | Junho |' ..
+'Julho | Agosto | Setembro | Outubro | Novembro | Dezembro'); 
set(E2, 'value', [6:6]);   /// valor default

//dia
T3 = uicontrol(h, 'style', 'text', 'string', 'Digite o dia:', ..
'position', [20 160 200 50], 'backgroundcolor', [0.7 0.9 1]);

E3 = uicontrol(h, 'style', 'edit', 'string', '07', ..
'position', [150 170 70 30], 'fontsize', 15, 'backgroundcolor', [1 1 1]);


function aniversario()   //      (GUIentries)
       y = evstr(get(E1, 'string'))
       m = get(E2, 'value')
       d = evstr(get(E3, 'string'))
    num = datenum(y, m, d);
    [n, s] = weekday(num, 'long');    // modo abreviado: weekday(num)
    messagebox('Voce nasceu dia '+s,Aluno)
endfunction


function ASCV_Sobre()
	msg = msprintf(gettext(" Interface desenvolvida na UENF (CCT - LCMAT - CC)"..
                          +"\nAutor: Prof. Ausberto S. Castro Vera,"..
                          +"\nCopyright (C) 2008-2023 ASCV-UENF "));
	messagebox(msg, gettext("Autor"), "info", "modal");
endfunction



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


P1 = uicontrol(h, 'position', [350 270 180 40], ...
                  'style', 'pushbutton', ...
                  'string', 'Pressione aqui ', ...   // butão para pressionar
                  'callback', 'aniversario', ...
                  "fontsize", 20, ...
                  'backgroundcolor', [1 0.5 0]);
                  


                  
