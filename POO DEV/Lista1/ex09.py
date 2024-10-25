class Movimentavel:
    def mover(self, dir):
        pass

class Desenhavel:
    def desenhar(self):
        pass

class Personagem:
    def __init__(self, nome) -> None:
        self.nome = nome
        self.posx = 0
        self.posy = 0

    def mover(self, dir):
        if dir == "Cima":
            self.posy += 1
        elif dir == "Baixo":
            self.posy -= 1 
        elif dir == "Esquerda":
            self.posx -= 1
        elif dir == "Direita":
            self.posx += 1

    def desenhar(self):
        print(f"{self.nome} foi desenhado em x = {self.posx} y = {self.posy}")

player = Personagem("Guerreiro")
player.desenhar()
player.mover("Cima")
player.desenhar()
player.mover("Direita")
player.desenhar()
