%  Arquivo:  05-geografia.pl
%
% Prof. Ausberto S. Castro Vera
% Disciplina : Paradigmas de Ling. de Programacao
% UENF-CCT-LCMAT-CC
% Ano: 2023
% Aluno: Gabriel Costa Fassarella
%-------------------------------------------------
% Geografia
%
%--------------  FATOS ---------------------------
capital(brasilia, brasil).
capital(brasilia, america_do_sul).
capital(lima, peru).
capital(lima, america_do_sul).
capital(santiago, chile).
capital(quito, equador).
capital(montevideo, uruguai).
capital(bogota, colombia).
capilal(lapaz, bolivia).
capital(buenosaires, argentina).
capital(caracas, venezuela).
%
esta_em(lima, america_do_sul).
esta_em(peru, america_do_sul).
esta_em(brasil, america_do_sul).
esta_em(saopaulo, brasil).
esta_em(medellin, colombia).
esta_em(portoalegre, brasil).
esta_em(saopaulo, america_do_sul).
esta_em(rio, brasil).
esta_em(campos, brasil).
esta_em(campos, rio).
esta_em(riodejaneiro,rio).
esta_em(riodejaneiro,brasil).
esta_em(riodejaneiro,america_do_sul).
esta_em(niteroi,rio).
esta_em(macae,rio).
esta_em(petropolis,rio).
esta_em(volta_redonda,rio).
esta_em(brasilia, brasil).
esta_em(recife, brasil).
esta_em(fortaleza, brasil).
esta_em(campinas, brasil).
esta_em(curitiba, brasil).
esta_em(curitiba, parana).
esta_em(arica, chile).
esta_em(guayaquil, equador).
limita_com(peru,brasil).
limita_com(bolivia,brasil).
limita_com(chile,peru).
limita_com(peru,chile).
limita_com(equador,peru).
limita_com(peru,equador).

%  REGRAS
%
viagem_nacional(X, Y):- esta_em(X, Z), esta_em(Y, Z), Z \= 'america_do_sul', X\=Y.
viagem_internacional(PaisA,PaisB):- capital(PaisA, X), capital(PaisB, Y), PaisA \= PaisB.


