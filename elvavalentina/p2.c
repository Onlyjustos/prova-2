#include <stdio.h>
 
int tamanho(char * str){
    int i =0;
    int count = 0;
 
    for (i=0; str[i] != '\0'; i++){
        if (str[i] != ' '){
        count++;
        }
    }
 
    return count;
}
 
int main(){
    char string[201];
    int i;
    char p[201];
 
    scanf("%[^\n]s", string);
    
    int tam = tamanho(string);
    int palindromo = 1;
    
    int j=0;
    for (i=0; string[i] != '\0'; i++){
        if (string[i] != ' '){
            
            string[i] = p[j];     //[1]
            
        }
        j++;
        
    }
    
    //[2]
   for (i=0; p[i] != '\0'; i++){
    printf("%c",p[i]);
    if (p[i] != p[tam-1-i]){
        palindromo = 0;
    }
   }
 
 
    if (palindromo == 1){
        printf("PALINDROMO\n");
    } else{
        printf("NAO PALINDROMO\n");
    }
 
 
 
    return 0;
}
//[1] atribuição errada da string sem espaço, correção: p[j] = string[i]
//[2] programa nao entra no loop
//[3] codigo muito parecido com a da giovana

