#include <stdio.h>

int count_tamanho_sem(char * str){
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
    char posic[201];

    scanf("%[^\n]s", string);

    int len = count_tamanho_sem(string);
    int e_palindromo = 1;

    int j=0;
    for (i=0; string[i] != '\0'; i++){
        if (string[i] != ' '){ 
            string[i] = posic[j]; //[1]
            
        }
        j++;
        
    }

   for (i=0; posic[i] != '\0'; i++){//[2]
    printf("%c", posic[i]);
    if (posic[i] != posic[len-1-i]){
        e_palindromo = 0;
    }
   }


    if (e_palindromo == 1){
        printf("PALINDROMO\n");
    } else{
        printf("NAO PALINDROMO\n");
    }



    return 0;
}
//[1] atribuição errada da string sem espaço, correção: p[j] = string[i]
//[2] programa nao entra no loop
//[3] codigo muito parecido com o da elva