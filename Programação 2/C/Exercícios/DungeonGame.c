#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Pos {
    int x, y;
} Pos;

void LoadData(int **mat, int n, int m) {
    int i, j;

    srand(time(NULL));
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            mat[i][j] = rand()%21 + (-10);
        }
    }
}

void ShowDun(int **mat, int n, int m, Pos loc, int hp) {
    int i, j;

    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(loc.x == i && loc.y == j) {
                printf("[%d]", hp);
            } 
            else {
                printf("[%d] ", mat[i][j]);
            }
        }
        printf("\n");
    } 
}

int HpCount(int **mat, Pos loc, int hp, int n, int m) {
    int i, j;

    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(loc.x == i && loc.y == j) {
                hp += mat[i][j];
                mat[i][j] = 0;
            } 
        }
    }
    return hp;
}

void Right(int **mat, Pos loc, int hp, int n, int m) {
    loc.x++;
    ShowDun(mat, n, m, loc, hp);
}

void Down(int **mat, Pos loc, int hp, int n, int m) {
    loc.y++;
    ShowDun(mat, n, m, loc, hp);
}

int main() {
    int **mat, n, m, i, op, hp = 15;
    Pos loc;

    printf("\n========================================================\n");
    printf("                    DUNGEON GAME\n");
    printf("========================================================\n");

    printf("\nThe demons had captured the princess and imprisoned\nher in the bottom-right corner of the dungeon.\n");
    printf("Our valiant knight was initially positioned in the \ntop-left room and must fight his way through dungeon \nto rescue the princess.\n");

    loc.x = loc.y = 0;

    printf("\nDungeon Size: ");
    scanf("%d %d", &n, &m);

    printf("\nRooms represented with 0 = empty rooms\n");
    printf("\nRooms represented with negative integer = enemy's rooms\n");
    printf("\nRooms represented with positive integer = rooms with heal potions\n");
    printf("\nYour hp will be found in the room you are in\n");
    printf("\n");

    mat = (int *) malloc(n * sizeof(int));
    for(i=0; i<n; i++) {
        mat[i] = (int *) malloc(m * sizeof(int));
    }

    LoadData(mat, n, m);
    hp = HpCount(mat, loc, hp, n, m);
    ShowDun(mat, n, m, loc, hp);

    while(hp > 0) {
        if(loc.x == n-1 && loc.y == m-1) {
            break;
        }
        printf("\nDo you want to go right [2] or down [1]? ");
        scanf("%d", &op);

        if(op == 2 && (loc.y+1) < (m)) {
            loc.y++;
            hp = HpCount(mat, loc, hp, n, m);
            ShowDun(mat, n, m, loc, hp);
        }

        if(op == 1 && (loc.x+1) < (n)) {
            loc.x++;
            hp = HpCount(mat, loc, hp, n, m);
            ShowDun(mat, n, m, loc, hp);
        }
    }

    if(hp < 0) {
        printf("\n YOU LOSE...\n");
    }

    else {
        printf("\n YOU WIN!\n");
    }


    return 0;
}