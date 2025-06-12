#include <stdio.h>
#include <stdlib.h>
char *limpar(char *str);

int main(){
    char char1, char2, esp;
    int cont=0, i=0, ip=0, iguais=0;

    char suj[200];

    scanf("%[^\n]%*c", suj);

    //tirar os espaços
    char *txt = limpar(&suj[0]);
    

    for(cont=0; txt[cont] != '\0'; cont++){
        //tamanho da frase
    }

    //ver se é impar ou par
    if (cont%2==0){
        ip=1;
    } else{
        ip =0;
    }

    cont--; // array começa no 0
    
    while(1){
        
        if(ip==1){
            if(cont==i+1) break; //par
        } if(ip==0){
            if(cont==i) break; //impar
        }
        
        //verificar se é mesmo

        char1 = txt[i]; //do começo
        char2 = txt[cont]; //do final
        
        if (char1 == char2){
            iguais =1;
        } else {
            iguais =0;
            break;
        }
        cont--;
        i++;
    }

    if(iguais==1){
        printf("PALINDROMO\n");
    } else printf("NAO PALINDROMO\n");
    
     
    return 0;
}

char *limpar(char *str){
    char *limpa = (char *)malloc(200);
    int cont=0, i=0, espaco=0;
 
    for (cont=0; str[cont] != '\0'; cont++){
        
        if ((str[cont] <= 'z' && str[cont] >= 'a') ||
            (str[cont] >= 'A' && str[cont] <= 'Z') ||
            (str[cont] >= '0' && str[cont] <= '9')
        ) {
 
            limpa[i]=str[cont];
 
            if (i>0 && limpa[i-1]==' ' && limpa[i]== ' ') {
                i--; 
            } 
            i++;
 
        }            
    }
 
    // Remove espaço final
    if (i > 0 && limpa[i - 1] == ' ') {
        i--;
    }
 
    limpa[i] = '\0';
    return limpa;
}