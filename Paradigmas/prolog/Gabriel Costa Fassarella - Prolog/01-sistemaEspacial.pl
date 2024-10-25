% programa  01-SistemaEspacial.pl
%
% Prof. Ausberto S. Castro Vera
% Disciplina : Paradigmas de Ling. de Programacao
% UENF-CCT-LCMAT-CC
% Date: 2023
% Aluno: Gabriel Costa Fassarella
%-------------------------------------------------
%%
%%%%%%%%%%%%%%%%   FATOS   %%%%%%%%%%%%%%%%%%%%%%%%
estrela(betelgeuse).
estrela(canopus).
estrela(arcturus).
estrela(vega).
estrela(sirius).
estrela(capella).
estrela(sol).
%%
estrela(rigel).
estrela(procion).
%%
orbita(mercurio,sol).
orbita(venus,sol).
orbita(terra,sol).
orbita(marte,sol).
orbita(jupiter,sol).
orbita(saturno,sol).
orbita(urano,sol).
orbita(netuno,sol).
%%
orbita(lua,terra).
orbita(phobos, marte).
orbita(deimos,marte).
orbita(ganimedes, jupiter).
orbita(callisto, jupiter).
orbita(europa,jupiter).
orbita(titan,saturno).
ssolar(sol).

%%%%%%%%%%%%%%%%% REGRAS   %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
planeta(P) :- orbita(P,sol).
satelite(S):- orbita(S,P),planeta(P)
ssolar(B) :- planeta(B).
ssolar(B) :- satelite(B).


  




