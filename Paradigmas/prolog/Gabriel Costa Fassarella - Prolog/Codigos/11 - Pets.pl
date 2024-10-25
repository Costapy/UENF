% Programa casa.pl
%
% Prof. Ausberto S. Castro Vera
% Disciplina : Paradigmas de Ling. de Programacao
% UENF-CCT-LCMAT-CC
% Ano: 2023
% Aluno: Gabriel Costa Fassarella
%-------------------------------------------------
%    Ver mapa da casa
%
%------------- FATOS  -----------------------

gato(tufao).
gato(tom).
gato(frajola).
cachorro(bidu).
cachorro(moliver).
cachorro(thorfin).
periquito(piu piu).
periquito(sol).
periquito(romeu).
hamster(mickey).
hamster(jerry).
hamster(minnie).

proprietario(pedro).
proprietario(breno).
proprietario(julia).

dono(pedro, tufao).
dono(pedro, bidu).
dono(pedro, tom).
dono(breno, moliver).
dono(breno, jerry).
dono(breno, piu piu).
dono(breno, sol).
dono(julia, minnie).
dono(julia, frajola).
dono(julia, minnie).
dono(julia, romeu).
dono(julia, thorfinn).

%------------- Regras  -----------------------

animais_de(X, Y):- dono(X, Y).
