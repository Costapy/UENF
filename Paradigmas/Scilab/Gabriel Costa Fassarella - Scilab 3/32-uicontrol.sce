// Prof. Ausberto S. Castro Vera
// UENF-CCT-LCMAT-Ciencia da Computacao
//  Maio, 2023 
//
// Adaptado de:    http://fileexchange.scilab.org/toolboxes/132000
//                 Version 1.0
//                 Author(s) Jean-Luc GOUDIER
//                 5th of March 2011 
//
// Para executar desde o editor SciNotes:   < Ctrl ><Shift>< E >
//
// ======> Assunto:  GUI   UIControl
clear; clc;
Aluno = 'Gabriel Costa Fassarella';
//------------------------------------------------------------

function ASCV_Sobre()
	msg = msprintf(gettext(" Interface Adaptada na UENF (CCT - LCMAT - CC)"..
                          +"\nAutor: Prof. Ausberto S. Castro Vera,"..
                          +"\nCopyright (C) 2008-2023 ASCV-UENF "));
	messagebox(msg, gettext("Autor"), "info", "modal");
endfunction
//----------------------------------------------------------------------------
// definições On-line de funções
deff('y=myf(A,B,C,D,x)',['y=A*x^3+B*x^2+C*x+D']);  // função de terceiro grau
deff('dy=dyf(A,B,C,D,x)',['dy=3*A*x^2+2*B*x+C']); // função derivada

h0=gcf();
h0.figure_size= [480,700];
h0.figure_position = [45,68];
h0.figure_name="UENF - Valores dos coeficientes de "+"Ax3+Bx2+Cx+D";

	// Remove menus originais do Scilab
	delmenu(h0.figure_id,gettext("&File"));
	delmenu(h0.figure_id,gettext("&Tools"));
	delmenu(h0.figure_id,gettext("&Edit"));
	delmenu(h0.figure_id,gettext("&?"));
	toolbar(h0.figure_id,"off");

	// Novas opcoes de menu
	hop1 = uimenu("parent",h0, "label",gettext("Arquivo"));
	hop2 = uimenu("parent",h0, "label",gettext("Sobre"));
	// Menu: Arquivo (remover janela grafica)
	uimenu("parent",hop1, "label",gettext("Fechar"), "callback", "close(h0)");
	// Menu: Sobre
	uimenu("parent",hop2, "label",gettext("Autor da Interface"), "callback","ASCV_Sobre();");

//----------------------------------
hd1=uicontrol('Parent',h0,'style','pushbutton','string'," Função:",...
              'callback',"deriv",'Position',[20,500,80,20], 'backgroundcolor', [0 1 0]);
Equation=" Y = ";
he=uicontrol('Parent',h0,'style','text','string',Equation,'Position',[70,460,320,30],'FontWeight','bold','FontSize',15);

//----------------------- Coeficiente A -------------              
h1t=uicontrol('Parent',h0,'style','text','string'," Coeficiente A",'Position',[20,430,70,20]);
h1=uicontrol('Parent',h0,'style','slider','MIN',-50,'Max',50,'Position',[20,410,420,20],...
              'callback',"graphe");
h1r=uicontrol('Parent',h0,'style','pushbutton','string',"Reset",'callback',"R_A",'Position',[380,430,60,20]);
h1v=uicontrol('Parent',h0,'style','text','string'," "+string(h1.value),'Position',[210,430,35,20],'FontWeight','bold','FontSize',15);

//----------------------- Coeficiente B -------------     
h2t=uicontrol('Parent',h0,'style','text','string'," Coeficiente B",'Position',[20,370,70,20]);
h2=uicontrol('Parent',h0,'style','slider','MIN',-50,'Max',50,'Position',[20,350,420,20],...
              'callback',"graphe");
h2r=uicontrol('Parent',h0,'style','pushbutton','string',"Reset",'callback',"R_B",'Position',[380,370,60,20]);
h2v=uicontrol('Parent',h0,'style','text','string'," "+string(h2.value),'Position',[210,370,35,20],'FontWeight','bold','FontSize',15);

//----------------------- Coeficiente C -------------    
h3t=uicontrol('Parent',h0,'style','text','string'," Coeficiente C",'Position',[20,310,70,20]);
h3=uicontrol('Parent',h0,'style','slider','MIN',-50,'Max',50,'Position',[20,290,420,20],...
              'callback',"graphe"); 
h3r=uicontrol('Parent',h0,'style','pushbutton','string',"Reset",'callback',"R_C",'Position',[380,310,60,20]);
h3v=uicontrol('Parent',h0,'style','text','string'," "+string(h3.value),'Position',[210,310,35,20],'FontWeight','bold','FontSize',15);

//----------------------- Coeficiente D -------------     
h4t=uicontrol('Parent',h0,'style','text','string'," Coeficiente D",'Position',[20,250,70,20]);
h4=uicontrol('Parent',h0,'style','slider','MIN',-50,'Max',50,'Position',[20,230,420,20],...
              'callback',"graphe");
h4r=uicontrol('Parent',h0,'style','pushbutton','string',"Reset",'callback',"R_D",'Position',[380,250,60,20]);
h4v=uicontrol('Parent',h0,'style','text','string'," "+string(h4.value),'Position',[210,250,35,20],'FontWeight','bold','FontSize',15);
//---------------------------------------------------    

hd2=uicontrol('Parent',h0,'style','pushbutton','string'," Gráfico da Derivada",...
                       'callback',"deriv",'Position',[20,150,150,20], 'backgroundcolor', [1 1 0]);

EquationDer=" Y'' = ";
hder=uicontrol('Parent',h0,'style','text','string',EquationDer,'Position',[70,110,320,30],'FontWeight','bold','FontSize',15);

//---------------------------------------------------  


//---------------------------------------------------  

hg=figure();
hg.figure_name = "Grafico de uma função de Terceiro Grau";
hg.figure_position = [609,71];
hg.figure_size = [628,594];



lines(0);


//----------------------------------------------------------------------------
function graphe;

  set(h1v,'string'," "+string(h1.value));
  set(h2v,'string'," "+string(h2.value));
  set(h3v,'string'," "+string(h3.value));
  set(h4v,'string'," "+string(h4.value));  
  clf;

x=-4:0.01:4;y=myf(h1.value,h2.value,h3.value,h4.value,x);
drawlater();
plot2d(x,y,rect=[-4 -100 4 100]);
hp=gca();
hp.x_location = "middle";
hp.y_location = "middle";
drawnow();
h1v.string  =" "+string(h1.value);

// élaboration de la chaine de l'équation (eq)
  eq1=h1.value;
  if h1.value==0;
    eq1="";
  else;
    eq1=string(h1.value)+"x3 "
  end;
  
  eq2=h2.value;
  if h2.value==0;
    eq2="";
  else;
    if h2.value<0;
    eq2=string(h2.value)+"x2 ";
    else;
    eq2="+"+string(h2.value)+"x2 ";
    end;  
  end;

  eq3=h3.value;
  if h3.value==0;
    eq3="";
  else;
    if h3.value<0;
    eq3=string(h3.value)+"x ";
    else;
    eq3="+"+string(h3.value)+"x ";
    end;  
  end;

  eq4=h4.value;
  if h4.value==0;
    eq4="";
  else;
    if h4.value<0;
    eq4=string(h4.value);
    else;
    eq4="+"+string(h4.value);
    end;  
  end;

eq=" y = "+eq1+eq2+eq3+eq4;set(he,'string',eq);


xtitle('Gráfico de uma função');   // titulo do grafico
toolbar(hg.figure_id,'off');

endfunction;
//----------------------------------------------------------------------------
function deriv; // Grafico da derivada
  graphe;
  x=-4:0.01:4;dy=dyf(h1.value,h2.value,h3.value,h4.value,x);
  drawlater();
  plot2d(x,dy,5,rect=[-4 -100 4 100]);  // 5 = vermelho
  ap=gca();
  ap.children(1).children.line_style=3;
  drawnow();
endfunction;

//-------------------------------------------------------------
function R_A    // Reset dos coefficientes  valor = ZERO
  set(h1,'value',0);
  graphe;
endfunction;

function R_B   
  set(h2,'value',0);
  graphe;
endfunction;

function R_C    
  set(h3,'value',0);
  graphe;
endfunction;

function R_D    
  set(h4,'value',0);
  graphe;
endfunction;


