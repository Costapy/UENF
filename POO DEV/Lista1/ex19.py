class Funcionario:
    def __init__(self, id, nome, cargo) -> None:
        self.id = id
        self.nome = nome
        self.cargo = cargo

    def __str__(self) -> str:
        return f"Nome: {self.nome} Cargo: {self.cargo}"

class Sistema:
    def __init__(self) -> None:
        self.lista_funcionarios = []

    def add_funcionario(self, funcionario):
        self.lista_funcionarios.append(funcionario)
        print(f"Funcionario com id {funcionario.id} adicionado!")

    def remove_funcionario(self, id):
        for funcionario in self.lista_funcionarios:
            if funcionario.id == id:
                self.lista_funcionarios.remove(funcionario)
                print(f"Funcionario com id {id} removido!")
    
    def update_funcionario(self, id, nome = None, cargo = None):
        for funcionario in self.lista_funcionarios:
            if funcionario.id == id:
                if nome != None:
                    funcionario.nome = nome
                if cargo != None:
                    funcionario.cargo = cargo
                print(f"Funcionario com id {id} atualizado")

    def listar(self):
        for funcionario in self.lista_funcionarios:
            print(funcionario)

f1 = Funcionario(1, "Dudu", "Sênior")
f2 = Funcionario(2, "Diogo", "CEO")

sist = Sistema()

sist.add_funcionario(f1)
sist.add_funcionario(f2)
sist.listar()

sist.remove_funcionario(1)
sist.listar()

sist.update_funcionario(2, nome="Alberoni")
sist.listar()