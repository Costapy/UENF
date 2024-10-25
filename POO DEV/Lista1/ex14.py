class Livro:
    def __init__(self, nome, autor, editora) -> None:
        self.nome = nome
        self.autor = autor
        self.editora = editora

    def __str__(self) -> str:
        return f"{self.nome} por {self.autor} (Editora: {self.editora})"

class Biblioteca:
    def __init__(self) -> None:
        self.livros = []

    def adicionar(self, livro):
        self.livros.append(livro)

    def remover(self, nome):
        for livro in self.livros:
            if livro.nome == nome:
                self.livros.remove(livro)
    
    def listar(self):
        for livro in self.livros:
            print(f"{livro} ")

l1 = Livro("Geometria Avançada", "Diogo", "DSS")
l2 = Livro("Principios Avançados de C", "Alberoni", "DSS")

bib = Biblioteca()

bib.adicionar(l1)
bib.adicionar(l2)
bib.listar()

bib.remover("Geometria Avançada")
bib.listar()