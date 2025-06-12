#include <stdio.h>
 
 
int main(){
 
char string [201];
scanf("%[^\n]%*c", string);
 
int tam = 0, j;
int controle = 0;
 
 
 
 
while (string[tam] != '\0'){
    tam++;
}
 
char espelhada[tam + 1];
 
 
for (j = 0; j <= tam; j++) {
        espelhada[j] = string[tam - j - 1];
    }
    
        espelhada[j] = '\0';
 
for (j = 0; j <= tam; j++){
    if(string[j] == espelhada[j]){
        controle = 1;
    }
    else {
        controle = 0;
    }
}
 
    if(controle){
        printf("PALINDROMO\n");
    }
    else{
        printf("NAO PALINDROMO\n");
    }
 
 
    return 0;
}