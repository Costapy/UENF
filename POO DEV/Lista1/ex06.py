class Animal:
    def __init__(self, nome):
        self.nome = nome

    def emitirSom(self):
        return f"Emitindo som..."
    
class Cachorro(Animal):
    def emitirSom(self):
        return f"AU AU AU"
    
class Gato(Animal):
    def emitirSom(self):
        return f"MIAU"
    
pitoco = Cachorro("Pitoco")
print(pitoco.emitirSom())