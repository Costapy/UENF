% Prof. Ausberto S. Castro Vera
% Disciplina : Paradigmas de Ling. de Programacao
% UENF-CCT-LCMAT-CC
% Date: 2023
% Aluno: Fulano  da Silva
%-------------------------------------------------
  quadrado :-  write('Escreva um valor: '),read(X),calculaquadrado(X).
  cubo :-  write('Escreva um valor: '),read(X),calculaCubo(X).

%%%-----------------------------------------------------

calculaquadrado(fim) :- !.
calculaquadrado(N) :-
              Q is N*N,
              write('O quadrado de '),
              write(N), write(' é '),
              write(Q), nl, quadrado.
 %%%-----------------------------------------------------
calculaCubo(fim) :- !.
calculaCubo(N) :-
              C is N*N*N,
              write('O cubo de '),
              write(N), write(' é '),
              write(C), nl, cubo.

 %%%-----------------------------------------------------
dobro:- write('Por favor ingresse um número : '),
                         read(X),nl,
                         write('O dobro de '), write(X), write(' é '), Y is 2*X,
                         write(Y),nl.
 %%%-----------------------------------------------------
