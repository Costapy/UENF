genitor(pam, bob).
genitor(tom, bob).
genitor(tom, liz).
genitor(bob, ann).
genitor(bob, pat).
genitor(pat, jim).
mulher(pam).
mulher(liz).
mulher(pat).
mulher(ann).
homem(tom).
homem(bob).
homem(jim).
prole(Y, X) :- genitor(X, Y).
mae(X, Y) :- genitor(X, Y), mulher(X).
avos(X, Z) :- genitor(X, Y), genitor(Y, Z).
irma(X, Y) :- genitor(Z, X), genitor(Z, Y), not(X = Y).
descendente(X, Z) :- genitor(Z, X).
descendente(X, Z) :- genitor(Y, X), descendente(Y, Z).
irmao(X, Y) :- genitor(Z, X), genitor(Z, Y), homem(X).
avospat(X, Y) :- homem(Z), genitor(Z, Y), genitor(X, Z).
ascendente(X, Y) :- genitor(X, Y).
ascendente(X, Z) :- genitor(X, Y), ascendente(Y, Z).
