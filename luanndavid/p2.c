#include <stdio.h>

int main(){
    char texto[201], texto2[201];
    int i, j, k = 0, q = 0;
    int TAM = 0; //tamanho da string

    scanf("%[^\n]", texto);

    for(i = 0; texto[i] != '\0'; i++){
        if(texto[i] != ' '){
            texto2[k] = texto[i];
            k++;
        }
    }

    //tamanho da string
    TAM = k;

    j = TAM - 1;
    
    //verificando as letras
    for(k = 0; k < TAM; k++){
        if(texto2[k] == texto2[j]){
            j--;
        }else {
            printf("NAO PALINDROMO\n");
            return 0;
        }
    }

    printf("PALINDROMO\n");



    return 0;
}