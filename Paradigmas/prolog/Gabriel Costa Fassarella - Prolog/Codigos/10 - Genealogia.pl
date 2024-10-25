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

 homem(diogo).
 homem(gabriel).
 homem(enzo).
 homem(luis).
 homem(lucas).
 mulher(raquel).
 mulher(jaqueline).
 mulher(julia).
 mulher(ana).
 mulher(larissa).
 pai(diogo, enzo).
 pai(diogo, luis).
 pai(diogo, julia).
 pai(enzo, gabriel).
 pai(enzo, larissa).
 pai(luis, lucas).
 mae(raquel, enzo).
 mae(raquel, luis).
 mae(raquel, julia).
 mae(jaqueline, gabriel).
 mae(jaqueline, larissa).
 mae(ana, lucas).
 casamento(diogo, raquel).
 casamento(enzo, jaqueline).
 casamento(luis, ana).
 
 %------------- Regras -----------------------
 
 filho(X, Y):- homem(X), pai(Y, X).
 filho(X, Y):- homem(X), mae(Y, X).

 filha(X, Y):- mulher(X), pai(Y, X).
 filha(X, Y):- mulher(X), mae(Y, X).
 
 irmao(X, Y):- filho(X, Z), filho(Y, Z), X \= Y.
 irmao(X, Y):- filho(X, Z), filha(Y, Z), X \= Y.
 
 irma(X, Y):- filha(X, Z), filho(Y, Z), X \= Y.
 irma(X, Y):- filha(X, Z), filha(Y, Z), X \= Y.
 
 tio(X, Y):- irmao(X, Z), filho(Y, Z).
 tio(X, Y):- irmao(X, Z), filha(Y, Z).
 tio(X, Y):- homem(X), casamento(X, Z), irma(Z, W), filho(Y, W).
 tio(X, Y):- homem(X), casamento(X, Z), irma(Z, W), filha(Y, W).
 
 tia(X, Y):- irma(X, Z), filho(Y, Z).
 tia(X, Y):- irma(X, Z), filha(Y, Z).
 tia(X, Y):- mulher(X), casamento(Z, X), irmao(Z, W), filho(Y, W).
 tia(X, Y):- mulher(X), casamento(Z, X), irmao(Z, W), filha(Y, W).
 
 primo(X, Y):- tio(Z, Y), filho(X, Z).
 prima(X, Y):- tio(Z, Y), filha(X, Z).
 
 avo1(X, Y):- homem(X), filho(Z, X), filho(Y, Z).
 avo1(X, Y):- homem(X), filha(Z, X), filho(Y, Z).
 avo1(X, Y):- homem(X), filha(Z, X), filha(Y, Z).
 avo1(X, Y):- homem(X), filho(Z, X), filha(Y, Z).
 
 avo2(X, Y):- mulher(X), filho(Z, X), filho(Y, Z).
 avo2(X, Y):- mulher(X), filha(Z, X), filho(Y, Z).
 avo2(X, Y):- mulher(X), filha(Z, X), filha(Y, Z).
 avo2(X, Y):- mulher(X), filho(Z, X), filha(Y, Z).
