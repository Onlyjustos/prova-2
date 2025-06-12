#include <stdio.h>
#include <stdlib.h>
#define N 201

int main() {
    char *string=NULL;
    int cont=0;
    int in, fi;
    int fo=0;

    string = (char *) malloc(N*sizeof(char));

    if(string==NULL) {
        printf("ERRO AO ALOCAR\n");
        return 0;
    }
    scanf("%[^\n]%*c", string);

    while(string[cont]!='\0') 
        cont++;
    in=0;
    fi=cont-1;
    while(1) {
        while(string[in]==' ') in++;
        while(string[fi]==' ') fi--;

        if(in>=(cont/2)||fi<(cont/2)) break;
        if(string[in]!=string[fi]) {
            fo=1;
            break;
        } else {
            in++;
            fi--;
        }
    }
    free(string);

    if(fo==1) printf("NAO PALINDROMO\n");
    else printf("PALINDROMO\n");
    
    return 0;
}