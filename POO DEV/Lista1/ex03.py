class Produto:
    def __init__(self, nome, preco, quant):
        self.__nome = nome
        self.__preco = preco
        self.__quant = quant
    
    def estoque(self):
        return f"Nome: {self.__nome} Preço: {self.__preco:.2f} Quantidade: {self.__quant}".replace(".", ",")
        
v = []

v.append(Produto("Caderno", 14.50, 5))
v.append(Produto("Lápis", 2.00, 10))
v.append(Produto("Caneta", 3.00, 10))

for i in v:
    print(i.estoque())