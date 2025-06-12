#include <stdio.h>
int main(){
    int i, j, controle = 0;
    int tamanho = 0;
    char frase[200];

    fgets(frase, 200, stdin);

    for(i = 0; frase[i]!= '\0'; i++){
        tamanho++;
    }

    j = tamanho-1;
    for(i = 0; i<tamanho-1; i++ ){
            j--;
            if(frase[i] == ' '){
                i++;
            }if(frase[j] == ' '){
                j--;
            }
            if(frase[i] != ' ' && frase[j] != ' '){
            if(frase[i] == frase[j]){
                controle = 0;
            }else if(frase[i] != frase[j]){
                controle = 1;
                break;
            }
            }
        }
    
    if(controle == 1){
        printf("NAO PALINDROMO\n");
    }else{
        printf("PALINDROMO\n");
    }

    return 0;
}