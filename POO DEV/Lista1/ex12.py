from enum import Enum

class DiasDaSemana(Enum):
    SEGUNDA = 1
    TERCA = 2
    QUARTA = 3
    QUINTA = 4
    SEXTA = 5
    SABADO = 6
    DOMINGO = 7

class Agenda:
    def __init__(self):
        self.compromissos = {dia: [] for dia in DiasDaSemana}

    def add_compromisso(self, dia, compromisso):
        self.compromissos[dia].append(compromisso)

    def listar(self, dia):
        print(f"Compromissos no dia {dia}")

        for compromisso in self.compromissos[dia]:
            print(f" {compromisso}")

agenda = Agenda()
agenda.add_compromisso(DiasDaSemana.SEGUNDA, "POO DEV")
agenda.add_compromisso(DiasDaSemana.SEGUNDA, "BD2")
agenda.listar(DiasDaSemana.SEGUNDA)
