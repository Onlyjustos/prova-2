#include <stdio.h>

int main(){
    char vetor[200];
    int i, j = 0;
    int final, inicio, tamanho = 0;
    fgets(vetor, sizeof(vetor), stdin);

    char invertido[200];

    for(i = 0; i < 200; i++){
        if(vetor[i] == '\n'){
            final = i;
        }
    }
   
    for(i = final - 1; i >= 0; i-- ){
        invertido[j++] = vetor[i];
    }

    int igual = 0;
    for(i = 0; i < final; i++){
        if(invertido[i] == vetor[i]){
            igual = 1;
        } else {
            igual = 0;
        }
    }

    if(igual){
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }
    
    

    return 0;
}