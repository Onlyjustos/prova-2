#include <stdio.h> 
int main() {
    char frase[200], palindromo[200];
    int i, j, k;
    char procura = ' ';
        scanf("%[^\n]", frase);
     
    int contador=0;
    int apaga=0;
    while(frase[contador] != '\0') {
        if(frase[contador] == ' ') {
            apaga++;
        }
        contador++;
    }
    for(i=0; i<contador;) {
        if(frase[i]==' ') {
        j=i;
            while(frase[j] != '\0') {
                frase[j] = frase[j+1];
                j++;
            }
            contador--;
        }
        else {
            i++;
        }
    }
    for(i=contador-1; i>=0; i--) {
        palindromo[contador-1-i] = frase[i];
    }
    int palim=0;
    for(i=0; i<contador; i++) {
        if(frase[i] != palindromo[i]) {
            palim++;
        }
    }
    if(palim==0) {
        printf("PALINDROMO\n");
    }
    else {
        printf("NAO PALINDROMO\n");
    }
    return 0;
}