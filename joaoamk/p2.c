#include <stdio.h>

int main () {
    int i = 1, aux = 1, flag = 0;
    char str[201], caractere;

    while(scanf("%c", &caractere) != EOF) {
        if(caractere >= 97 && caractere <= 122) {
            str[i] = caractere;
            i++;
        }
    }
    i--;

    while (str[i] == str[aux]) {
        if(i == 1) {
            flag++;
            break;
        }
        if(str[i] != str[aux]) {
            break;
        }
        i--;
        aux++;
    }
    if(flag >= 1) {
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }

    return 0;
}