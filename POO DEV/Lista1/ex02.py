class ContaBancaria:
    def __init__(self, saldo):
        self.__saldo = saldo

    def sacar(self, saque):
        self.__saldo = self.__saldo - saque

    def depositar(self, deposito):
        self.__saldo = self.__saldo + deposito

    def consultar(self):
        return f"Saldo: {self.__saldo}"

conta = ContaBancaria(1000)

conta.sacar(500)

conta.depositar(70)

print(conta.consultar())

        