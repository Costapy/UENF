% programa  04-hanoi.pl
%
% Prof. Ausberto S. Castro Vera
% Disciplina : Paradigmas de Ling. de Programacao
% UENF-CCT-LCMAT-CC
% Ano: 2023
% Nome do aluno: Gabriel Costa Fassarella
%-------------------------------------------------

%     X = esquerda      Y = direita
mover(1,X,Y,_) :-
               write('Mover disco do topo da torre  '),
               write(X), write(' para a torre '),
               write(Y), nl.


mover(Ndiscos,Esquerda,Direita,Centro) :-
               Ndiscos > 1, M is Ndiscos - 1,
               mover(M,Esquerda,Centro,Direita),
               mover(1,Esquerda,Direita,_),
               mover(M,Centro,Direita,Esquerda).


