#include <stdio.h>
#include <stdlib.h>


int tamanho_string(char str[]) {
    int tam = 0;
    while (str[tam] != '\0') {
        tam++;
    }
    return tam;
}
void tirar_espaco(char str[], int tam){
    int i, j = 0;
    char outro[200];
    for(i = 0; i < tam; i++){
        if(str[i] != ' '){
            outro[j] = str[i];
            j++;
        }

    }
    outro[j] = '\0';
    int tamo = tamanho_string(outro);
    for(i = 0; i < tamo; i++){
        str[i] = outro[i];
    }
    str[i] = '\0';

}
int main(){
    int i, j;
    char *str = NULL;
    char *pal = NULL;
    str = (char *) malloc(201 * sizeof(char));
    pal = (char *) malloc(201 * sizeof(char));
    scanf("%[^\n]%*c", str);
    //printf("%s\n", str);
    int tam = tamanho_string(str);
    tirar_espaco(str, tam);
    //printf("%s\n", str);
    tam = tamanho_string(str);
    
    for(i = 0, j = tam - 1; i < tam; i++, j--){
        pal[i] = str[j];
    }

    pal[i] = '\0';
    //printf("%s\n", pal);
    for(i = 0; i < tam; i++){
        if(pal[i] != str[i]){
            printf("NAO PALINDROMO\n");
            return 0;
        }
    }
    printf("PALINDROMO\n");
     



    free(str);
    free(pal);

    return 0;
}