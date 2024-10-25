#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define nC 3
#define nL 3

void FullMat(char mat[nL][nC]) {
    int i, j;

    for(i=0; i<nL; i++) {
        for(j=0; j<nC; j++) {
            mat[i][j] = 'a';
        }
    }
}

void ShowMat(char mat[nL][nC]) {
    int i, j;

    printf("\n      1       2       3");
    for(i=0; i<nL; i++) {    
        printf("\n%d   ", i+1);
        for(j=0; j<nC; j++) {
            if(mat[i][j] == 'a') {
                printf("[   ]   ");
            }
            else {
                printf("[ %c ]   ", mat[i][j]);
            } 
        }
        printf("\n"); 
    }
}

int Verif(char mat[nL][nC], int m, int n) {
    int i, j;

    for(i=0; i<nL; i++) {    
        for(j=0; j<nC; j++) {
            if(m-1 == i && n-1 == j) {
                if(mat[i][j] == 'X' || mat[i][j] == 'O') {
                    return (1);
                }
                
                if(mat[i][j] == 'a') {
                    return (0);
                }
            }
        }
    }
}

int VerifO(char mat[nL][nC], int m, int n){
    int i, j;

    for(i=0; i<nL; i++) {    
        for(j=0; j<nC; j++) {
            if(m == i && n == j) {
                if(mat[i][j] == 'X' || mat[i][j] == 'O') {
                    return (1);
                }
                
                if(mat[i][j] == 'a') {
                    return (0);
                }
            }
        }
    }
}

void AllocateX(char mat[nL][nC], int m, int n) {
    int i, j;

    for(i=0; i<nL; i++) {    
        for(j=0; j<nC; j++) {
            if(m-1 == i && n-1 == j) {
                mat[i][j] = 'X';
                exit;
            }
        }
    }
}

void GeneO(char mat[nL][nC], int m, int n) {
    int k;
    
    m = rand()%3;
    n = rand()%3;

    printf("\n%d %d\n", m, n);

    k = VerifO(mat, m, n);

    if(k == 1) {
        GeneO(mat, m, n);
    }

    if(k == 0) {
        AllocateO(mat, m, n);
    }
}

void AllocateO(char mat[nL][nC], int m, int n) {
    int i, j;

    for(i=0; i<nL; i++) {    
        for(j=0; j<nC; j++) {
            if(m == i && n == j) {
                mat[i][j] = 'O';
                exit;
            }
        }
    }
}

void WinCond(char mat[nL][nC], int win) {
    int i, j;
    j = 0;
    i = 0;

    for(i=0; i<nL; i++) {
        if(mat[i][j] == 'X' && mat[i][j] == mat[i][j+1] == mat[i][j+2] == 'X') {
            win = 1;
        }
        
        if(mat[i][j] == 'O' && mat[i][j] == mat[i][j+1] == mat[i][j+2] == 'O') {
            win = 2;
        }
    }

    for(j=0; i<nC; j++) {
        if(mat[i][j] == 'X' && mat[i][j] == mat[i+1][j] == mat[i+2][j] == 'X') {
            win = 1;
        }

        if(mat[i][j] == 'O' && mat[i][j] == mat[i+1][j] == mat[i+2][j] == 'O') {
            win = 2;
        }
    }

    for(i=0; i<nL; i++) {
        for(j=0; j<nC; j++) {
            if(i == j && mat[i][j] == 'X') {
                int contx = 0;
                contx++;
                if(contx == 3) {
                    win = 1;
                }
            }
            if(i == j && mat[i][j] == 'X') {
                int contO = 0;
                contO++;
                if(contO == 3) {
                    win = 2;
                }
            }
        }
    }
}

void Game(char mat[nL][nC]) {
    int m, n, k, win = 0, cont = 0;

    srand(time(NULL));
    while(win == 0) {
        ShowMat(mat);

        printf("Escolha uma Posicao: ");
        scanf(" %d %d", &m, &n);

        k = Verif(mat, m, n);

        if(k == 1) {
            printf("Posicao ja alocada\n");
            Game(mat);
        }

        if(k == 0) {
            AllocateX(mat, m, n);
            cont++;
        }

        if (cont == 9) {
            printf("\nDeu velha!\n");
            break;
        }

        WinCond(mat, win);
        printf("\n%d\n", win);
        if (win == 1) {
            printf("\nParabéns! Você ganhou!!\n");
            break;;
        }

        ShowMat(mat);

        printf("\nMinha Vez!\n");

        GeneO(mat, m, n);
        cont++;

        WinCond(mat, win);

        if (win == 2) {
            printf("\nParabéns! Você ganhou!!\n");
            break;
        }

        if (cont == 9) {
            printf("\nDeu velha!\n");
            break;
        }
    }
}

int main() {
    char mat[nL][nC];

    printf("\nVamos jogar o jogo da velha!\n");

    FullMat(mat);

    printf("\nVoce sera o X...\n");

    Game(mat);

    return 0;
}