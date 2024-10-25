% programa  02-familia-A.pl
%
% Prof. Ausberto S. Castro Vera
% Disciplina : Paradigmas de Ling. de Programacao
% UENF-CCT-LCMAT-CC
% Date: 2023
% Aluno: Gabriel Costa Fassarella
%-------------------------------------------------
 % FATOS
    mulher(maria).
    mulher(eva).
    mulher(martha).
    julia(ana)
    homem(adam).
    homem(pedro).
    homem(paulo).
    homem(julio).
    pai(adam,pedro). % significa adam é pai de pedro
    pai(adam,paulo).
    marido(adam,eva).
    esposa(eva,adam).
    mae(eva,maria).
    mae(eva,pedro).
    filha(maria,eva).
    filha(maria,adam).
    filha(suzana,martha).
    irma(eva,martha).
    filha(ana,pedro).
    filho(julio,maria).



 % REGRAS

    filho(F,P):-homem(F),pai(P,F).
    filho(F,M):-homem(F),mae(M,F).
    
    filha(F,P):-mulher(F),pai(P,F).
    filha(F,M):-mulher(F),mae(M,F).
    
    irmao(X,Y):-filho(X,Z),filho(Y,Z), X \= Y.
    irmao(X,Y):-filho(X,Z),filha(Y,Z), X \= Y.
    
    irma(X,Y):-filha(X,Z),filho(Y,Z), X \= Y.
    irma(X,Y):-filha(X,Z),filha(Y,Z), X \= Y.
    
    prima(X,Y):-irmao(Z,W),filha(X,Z),filho(Y,W).
    prima(X,Y):-irmao(Z,W),filha(X,Z),filha(Y,W).
    prima(X,Y):-irma(Z,W),filha(X,Z),filho(Y,W).
    prima(X,Y):-irma(Z,W),filha(X,Z),filha(Y,W).
    
    tia(X, Y):- irma(X, Z), filho(Y, Z).
    tia(X, Y):- irma(X, Z), filha(Y, Z).
    tia(X, Y):- mulher(X), esposa(X, Z), irmao(Z, W), filho(Y, W).
    tia(X, Y):- mulher(X), esposa(X, Z), irmao(Z, W), filha(Y, W).

