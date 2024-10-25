// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto: SINAIS   =============================

clear; clc;
Aluno = 'Gabriel Costa Fassarella';

function ASCV_Sobre()
    msg = msprintf(gettext(" Interface desenvolvida na UENF (CCT - LCMAT - CC)"..
                          +"\nAutor: Prof. Ausberto S. Castro Vera,"..
                          +"\nCopyright (C) 2008-2023 ASCV-UENF "));
    messagebox(msg, gettext("Autor"), "info", "modal");
endfunction

t = 0:0.01:2;

fig1 = scf(1);
clf;

f = 1;
A = 1;
sinal1 = A*sin(2*%pi*f*t);
subplot(3, 1, 1);
plot(t, sinal1, "magenta");
a = get("current_axes");
a.axes_visible = "on";
a.grid = [2,2];
a.box = "off";
a.grid = [1 6 3];
xtitle('SINAL A : sin(2*Pi*f*t)');
h1 = gcf();
h1.figure_name = 'UENF Telecomunicações: Sinais Analógicos - ' + Aluno;
h1.position = [200 200 630 600];

delmenu(h1.figure_id, gettext("&File"));
delmenu(h1.figure_id, gettext("&Tools"));
delmenu(h1.figure_id, gettext("&Edit"));
delmenu(h1.figure_id, gettext("&?"));
toolbar(h1.figure_id, 'off');

hop1 = uimenu("parent", h1, "label", gettext("Arquivo"));
hop2 = uimenu("parent", h1, "label", gettext("Sobre"));

uimenu("parent", hop1, "label", gettext("Fechar"), "callback", "close(h1)");

uimenu("parent", hop2, "label", gettext("Autor da Interface"), "callback", "ASCV_Sobre();");

f = 3;
A = 1/3;
sinal2 = A*sin(2*%pi*f*t);
subplot(3, 1, 2);
plot(t, sinal2, "blue");
a = get("current_axes");
a.axes_visible = "on";
a.grid = [2,2];
a.box = "off";
a.grid = [1 6 3];
xtitle('SINAL B: (1/3)*sin(2*Pi*f*t)');

subplot(3, 1, 3);
sinal3 = (4/%pi)*(sinal1 + sinal2);
plot(t, sinal3, "red");
a = get("current_axes");
a.axes_visible = "on";
a.grid = [2,2];
a.box = "off";
a.grid = [1 6 3];
xtitle('SINAL A + B : (4/Pi)[sin(2*Pi*f*t) + (1/3)*sin(2*Pi*f*t)]');

sleep(500);
disp('Execução terminada...!');
