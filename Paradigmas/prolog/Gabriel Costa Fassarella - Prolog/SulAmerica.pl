% SulAmerica.pl
%
%
% Prof. Ausberto S. Castro Vera
% Disciplina : Paradigmas de Ling. de Programacao
% UENF-CCT-LCMAT-CC
% Ano: 2023
% Aluno: Fulano  da Silva
%-------------------------------------------------

capital(brasilia, brasil).
capital(lima, peru).
capital(santiago, chile).
capital(quito, equador).
capital(montevideo, uruguai).
capital(bogota, colombia).
capilat(lapaz, bolivia).
capital(buenosaires, argentina).
capital(caracas, venezuela).
capital(asuncion, paraguay).
%
limita_com(peru,brasil).
limita_com(brasil,uruguay).
limita_com(brasil,argentina).
limita_com(brasil,paraguay).
limita_com(brasil,bolivia).
limita_com(brasil,peru).
limita_com(brasil,colombia).
limita_com(brasil,venezuela).
limita_com(brasil,guyana).
limita_com(brasil,suriname).
limita_com(brasil,guyanafrancesa).

limita_com(chile,peru).
limita_com(equador,peru).
limita_com(equador,colombia).
limita_com(uruguay,argentina).
limita_com(argentina,chile).
limita_com(argentina,bolivia).
limita_com(chile,bolivia).
limita_com(peru,colombia).
limita_com(colombia,venezuela).
limita_com(venezuela,guyana).
limita_com(guyana,suriname).
limita_com(suriname,guyanafrancesa).
limita_com(colombia,panama).

limita_com(A,B):-limita_com(B,A).
