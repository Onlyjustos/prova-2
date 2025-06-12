#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 200

int main() {

    int i, j, k, palindromo;
    char *palavra = NULL;
    char *teste = NULL;
    char *final = NULL;
    i = j = k = palindromo = 0;

    palavra = malloc(MAX_CHAR * sizeof(char));
    teste = malloc(MAX_CHAR * sizeof(char));
    final = malloc(MAX_CHAR * sizeof(char));

    for(i = 0; i < MAX_CHAR; i++) {
        palavra[i] = '\0'; 
        teste[i] = '\0';
        final[i] = '\0';
    }

    fgets(palavra, MAX_CHAR, stdin);

    i = 0;

    while(palavra[i] != '\0' && palavra[i] != '\n') {
        if(palavra[i] != ' ' && palavra[i] != '\n' && palavra[i] != '\0') {
            teste[k] = palavra[i];
            k++;
        }

        i++;
    }

    i = 0;

    while(teste[i] != '\0' && teste[i] != '\n') {
        i++;
    }
    
    i--;

    while(teste[j] != '\0') {
        final[i] = teste[j];
        i--;
        j++;
    }

    i = 0;

    while(teste[i] != '\0') {
        if(teste[i] != final[i]) {
            palindromo = 0;
            break;
        } else {
            palindromo = 1;
        }

        i++;
    }

    if(palindromo) {
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }
    
    
    free(palavra);
    free(teste);
    free(final);

    return 0;
}