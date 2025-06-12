#include <stdio.h>
#include <stdlib.h>

int main()  {
    char *fra, *fraf;
    int i, j = 0, tam = 0, igual= 0, tam2 = 0;
    fra = (char*) calloc(200, sizeof(char)); 
    if(fra == NULL){
        printf("Erro ao alocar memória\n");
        exit(0);
    }
    scanf("%[^\n]%*c", fra);
    while(fra[tam2] != '\0'){
        if(fra[tam2] >= 'a' && fra[tam2] <= 'z'){ //[1]
        tam++;
        }
        tam2++;
    }
    fraf = (char*) calloc(tam,sizeof(char));
    if(fraf == NULL){
        printf("Erro ao alocar memória\n");
        exit(0);
    }
    for(i = 0; i < tam2; i++){
        if(fra[i] >= 'a' && fra[i] <= 'z'){// [1]
            fraf[j] = fra[i];
            j++;
        }
    }
    for(i = 0; i < tam; i++){
        if(fraf[i] == fraf[tam - 1 - i]){
            igual++;
        }
        }
        if(igual == tam){
            printf("PALINDROMO\n");
        }else{
            printf("NAO PALINDROMO\n");
        }
        free(fraf);
        free(fra);
        return 0;
    }
//[1] Grave: o programa desconsidera numeros