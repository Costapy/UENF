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
lugar(sala).
lugar(cozinha).
lugar(escritorio).
lugar(corredor).
lugar('sala de jantar').
lugar(celeiro).
lugar(jardim).
lugar(banheiro).
lugar(garagem).
lugar(deposito).


porta(escritorio, corredor).
porta(banheiro, corredor).
porta(garagem, corredor).
porta(deposito, garagem).
porta(cozinha, escritorio).
porta(corredor, 'sala de jantar').
porta(cozinha, celeiro).
porta('sala de jantar', cozinha).

localizacao(privada, banheiro).
localizacao(chuveiro, banheiro).
localizacao(toalha, banheiro).
localizacao(sabonete, banheiro).
localizacao(carro, garagem).
localizacao(pneu, garagem).
localizacao(moto, garagem).
localizacao(bicicleta, garagem).
localizacao(ferramentas, deposito).
localizacao(moveis, deposito).
localizacao(caixas, deposito).
localizacao(armarios, deposito).
localizacao(escrivaninha, escritorio).
localizacao(laranja, cozinha).
localizacao(lanterna, escrivaninha).
localizacao('maq de lavar', celeiro).
localizacao(sabao, 'maq de lavar').
localizacao(verdura, cozinha).
localizacao(faca, cozinha).
localizacao(panela, cozinha).
localizacao(arroz, cozinha).
localizacao(uva, cozinha).
localizacao(biscoitos, cozinha).
localizacao(computador, escritorio).
localizacao(mesa,'sala de jantar').

comestivel(laranja).
comestivel(biscoitos).
comestivel(arroz).
comestivel(uva).

gosto_amargo(verdura).

estamos_em(cozinha).

%%---------------  REGRAS --------------------
conectar(X,Y) :- porta(X,Y).
conectar(X,Y) :- porta(Y,X).

lista_coisas(Lugar) :-
           localizacao(X, Lugar),
           tab(2),
           write(X),
           nl,
           fail.
           lista_coisas(Nestelugar).
           
lista_portas(Lugar) :-
           conectar(Lugar, X),
           tab(2),
           write(X),
           nl,
           fail.
           lista_portas(_).
           
observar :- estamos_em(Lugar),
            write('Voce esta na '), write(Lugar), nl,
            write('Voce pode ver:'), nl,
            lista_coisas(Lugar),
            write('Voce pode ir para:'), nl,
            lista_portas(Lugar).

  
mover(Lugar):- retract(estamos_em(X)), asserta(estamos_em(Lugar)).

posso_ir(Lugar):- estamos_em(X), conectar(X, Lugar).
posso_ir(Lugar):- write('Voce nao pode ir de aqui para '), write(Lugar), nl, fail.

goto(Lugar):- posso_ir(Lugar), mover(Lugar), observar.

estou(Lugar):- estamos_em(Lugar), lista_coisas(Lugar).

comer(Y):- estou(X), comestivel(Y).

objt(T,R):- porta(cozinha, R), localizacao(T,R).

