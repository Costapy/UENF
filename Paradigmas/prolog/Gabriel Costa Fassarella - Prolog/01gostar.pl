  % Arquivo:      01gostar.pl
% Prof. Ausberto S. Castro Vera
% Disciplina : Paradigmas de Ling. de Programacao
% UENF-CCT-LCMAT-CC
% Date: 2023
% Aluno: Fulano  da Silva
%-------------------------------------------------

/** <exemples>
?- gostade(rodrigo,dahl).
?- gostade(rodrigo,chop_suey).
?- gostade(rodrigo,pizza).
?- gostade(rodrigo,chips).
?- gostade(rodrigo,curry).
*/

gostade(rodrigo,Comida) :-  peruana(Comida), bebida(Comida).
gostade(rodrigo,Comida) :-  chinesa(Comida).
gostade(rodrigo,Comida) :-  italiana(Comida).
gostade(rodrigo,chips).

peruana(ceviche).
peruana(pisco).
peruana(ajideGalinha).
peruana(milhoverde).

bebida(suco).
bebida(pisco).
bebida(inkaKola).

chinesa(yakissoba).
chinesa(tofuRecheado).
chinesa(guabao).

italiana(pizza).
italiana(espaguete).
