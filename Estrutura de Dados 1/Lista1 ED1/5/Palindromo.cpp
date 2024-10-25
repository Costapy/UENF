#include <stdio.h>
#include <ctype.h>
#include <string.h>

void remove_espaco(char *s) {
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) { //desloca pela string
        if (!isspace(s[i])) { //identifica espaço e tira do maiúsculo 
            s[j++] = tolower(s[i]);
        }
    }
    s[j] = '\0'; //acrescenta o fim da string
}

int palindromo(char *s, int start, int end) {
    if (end - start < 1) { //caso base se for palindromo
        return 1;
    }

    if (s[start] == s[end]) {
        return palindromo(s, start + 1, end - 1); //chamada recursiva da função enquanto for palindromo
    } else {
        return 0; //retorno caso não seja palindromo
    }
}

int main() {
    char str[100];

    printf("Digite uma string: "); //inicia a string
    fgets(str, 100, stdin);

    remove_espaco(str);

    if (palindromo(str, 0, strlen(str) - 1)) {
        printf("A string e um palindromo.\n");
    } else {
        printf("A string nao e um palindromo.\n");
    }

    return 0;
}

