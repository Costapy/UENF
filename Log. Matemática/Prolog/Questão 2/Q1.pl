animal(pele).
nadadeiras(salmao).
nadadeiras(tubarao).
nadadeiras(peixe).
nadar(salmao).
nadar(tubarao).
nadar(peixe).
ovos(salmao).
ovos(peixe).
ovos(canario).
ovos(avestruz).
voar(canario).
voar(morcego).
asas(canario).
asas(morcego).
asas(avestruz).
andar(vaca).
andar(avestruz).
comida(vaca).
cor(amarelo).

passaros(piupiu, canario) :- ovos(canario), voar(canario), asas(canario), animal(pele), cor(amarelo).
peixes(nemo, peixe) :- nadadeiras(peixe), nadar(peixe), ovos(peixe), animal(pele).
peixes(tutu, tubarao) :- nadadeiras(tubarao), nadar(tubarao), animal(pele).
mamifero(mimosa, vaca) :- andar(vaca), animal(pele), comida(vaca).
mamifero(vamp, morcego) :- voar(morcego), animal(pele).
passaros(xica, avestruz) :- andar(avestruz), ovos(aveztruz), asas(avestruz).
peixes(alfred, salmao) :- nadar(peixe), nadadeiras(peixe), ovos(peixe).










