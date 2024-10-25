class Pessoa: 
    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade

    def atrib(self):
        return f"Nome: {self.nome}, Idade: {self.idade}"
    
obj = Pessoa("João", 47)

print(obj.atrib())