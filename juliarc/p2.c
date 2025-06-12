#include <stdio.h>

int main() {

    int i, j, tam;
    char s[200];

    scanf("%[^\n]", s);
    // printf("%s\n", s);
    
    //tamanho da string;
    tam = 0;
    while(s[tam] != '\0') {
        tam++;
    }
    //printf("%d\n", tam);

    //comparar primeiros e ultimos;
    int cont = 1;
    // for(i = 0; i < j; i++) {
    //     for(j = tam-1; j > i; j--) {
    //         printf("%c %c\n", s[i], s[j]);
    //         if(s[i] == s[j]) {
    //             cont = 1;
    //         } else {
    //             cont = 0;
    //             break;
    //         }
    //     }
    // }
    
    i = 0;
    j = tam-1;
    while(i <= j) {
        if(s[i] == ' ') i++;//poderia ter usado continue --Jotinha
        if(s[j] == ' ') j--;
        if(s[i] != s[j]) {
            cont = 0;
            break;
        }
        i++;
        j--;
    }
        



    if(cont == 0) printf("NAO PALINDROMO\n");
    else printf("PALINDROMO\n");
    

    return 0;
}