class Aluno:
    def __init__(self, nome, matricula, nota):
        self.nome = nome
        self.matricula = matricula
        self.nota = nota

class Escola:
    def __init__(self):
        self.alunos = []

    def adicionar_alunos(self, aluno):
        self.alunos.append(aluno)

    def listar(self):
        for aluno in self.alunos:
            print(aluno)


