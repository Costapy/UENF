class Motor:
    def __init__(self, potencia):
        self.potencia = potencia
    
class Carro:
    def __init__(self, marca, modelo, potencia_motor):
        self.marca = marca
        self.modelo = modelo
        self.potencia_motor = Motor(potencia_motor)

    def ficha(self):
        return f"Marca: {self.marca} Modelo: {self.modelo} Potencia: {self.potencia_motor.potencia} CV"
    
astra = Carro("Chevrolet", "Astra", 8)
print(astra.ficha())