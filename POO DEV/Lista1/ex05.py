class Veiculo:
    def __init__(self, marca, modelo):
        self.marca = marca
        self.modelo = modelo

class Carro(Veiculo):
    def ficha(self):
        return f"Marca: {self.marca} Modelo: {self.modelo}"
    
    def buzinar(self):
        return "BIIII BIIIII"
    
    def acelerar(self):
        return "VRUUUUUUUUUMMMMM"
    
    def freiar(self):
        return "FSSSSSHHHHHHHHHHH"
    
celta = Carro("Chevrolet", "Celta")

print(celta.buzinar())