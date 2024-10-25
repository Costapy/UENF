from pyamaze import maze, agent
from queue import PriorityQueue

#Está iniciando em outro lugar pois essa biblioteca do labirinto não da pra mudar o inicio, apenas o fim

destino = (2, 5)

def h_score(celula, destino):
    xc = celula[0]
    yc = celula[1]
    xd = destino[0]
    yd = destino[1] 
    return abs(yc - yd) + abs(xc - xd)

def aestrela(labirinto):
    f_score = {celula: float("inf") for celula in labirinto.grid}
    g_score = {celula: float("inf") for celula in labirinto.grid}
    
    celula_inicial = (4, 5)
    g_score[celula_inicial] = 0
    f_score[celula_inicial] = g_score[celula_inicial] + h_score(celula_inicial, destino)

    fila = PriorityQueue()
    fila.put((f_score[celula_inicial], h_score(celula_inicial, destino), celula_inicial))

    caminho = {}
    while not fila.empty():
        celula = fila.get()[2]

        if celula == destino:
            break

        for direcao in "NSEW":
            if labirinto.maze_map[celula][direcao] == 1:
                linha_celula, coluna_celula = celula
                if direcao == "N":
                    proxima_celula = (linha_celula - 1, coluna_celula)
                elif direcao == "S":
                    proxima_celula = (linha_celula + 1, coluna_celula)
                elif direcao == "W":
                    proxima_celula = (linha_celula, coluna_celula - 1)
                elif direcao == "E":
                    proxima_celula = (linha_celula, coluna_celula + 1)

                if proxima_celula not in g_score:
                    continue
                
                novo_g_score = g_score[celula] + 1

                if novo_g_score < g_score.get(proxima_celula, float("inf")):
                    g_score[proxima_celula] = novo_g_score
                    f_score[proxima_celula] = novo_g_score + h_score(proxima_celula, destino)
                    fila.put((f_score[proxima_celula], h_score(proxima_celula, destino), proxima_celula))
                    caminho[proxima_celula] = celula

    caminho_final = {}
    celula_analisada = destino
    while celula_analisada in caminho:
        caminho_final[caminho[celula_analisada]] = celula_analisada 
        celula_analisada = caminho[celula_analisada]      

    return caminho_final

labirinto = maze(4, 5)
labirinto.CreateMaze(2, 5, loadMaze="maze--2024-10-21--12-34-56.csv")
agente = agent(labirinto, filled=True, footprints=True)

caminho = aestrela(labirinto)
labirinto.tracePath({agente: caminho}, delay=300)
labirinto.run()
