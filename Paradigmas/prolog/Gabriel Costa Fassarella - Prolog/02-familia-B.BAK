% programa  02-familia-B.pl
%
% Prof. Ausberto S. Castro Vera
% Disciplina : Paradigmas de Ling. de Programacao
% UENF-CCT-LCMAT-CC
% Date: 2023
% Aluno: Gabriel Costa Fassarella
%-------------------------------------------------
 % FATOS

    mulher(luisa).  % significa luisa é uma mulher
    mulher(eva).
    mulher(martha).
    homem(adam).
    homem(pedro).
    homem(paulo).
    pai(adam,pedro). % significa adam é pai de pedro
    pai(adam,paulo).
    marido(adam,eva).
    esposa(eva,adam).
    mae(eva,luisa).
    mae(eva,pedro).
    filha(maria,eva).
    filha(luisa,adam).
    filha(suzana,martha).
    irma(eva,martha).



 % REGRAS

    filho(F,P):-homem(F),pai(P,F).
    filho(F,M):-homem(F),mae(M,F).
    
    filha(F,P):-mulher(F),pai(P,F).
    filha(F,M):-mulher(F),mae(M,F).

% Completar as regras:
    irmao(X,Y):-filho(X,Z),filho(Y,Z), X \= Y.
    irmao(X,Y):-filho(X,Z),filha(Y,Z), X \= Y.

    irma(X,Y):-filha(X,Z),filho(Y,Z), X \= Y.
    irma(X,Y):-filha(X,Z),filha(Y,Z), X \= Y.

    tia(X, Y):- irma(X, Z), filho(Y, Z).
    tia(X, Y):- irma(X, Z), filha(Y, Z).
    tia(X, Y):- irma(Z, X), filho(Y, Z).
    tia(X, Y):- irma(Z, X), filha(Y, Z).

    prima(X,Y):- tia(Z, Y), filha(X, Z).

