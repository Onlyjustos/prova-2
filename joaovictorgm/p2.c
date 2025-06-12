#include <stdio.h>
int main(){
    char frase[200];
    char espaso[200];
    char novafrase[200];
    int i, j= 0 ,k = 0,temp = 0,l = 0;
    fgets(frase, sizeof(frase), stdin);
    for(i = 0 ; frase[i] != '\0';i++){
        if(frase[i] != ' '){
            espaso[l] = frase[i];
            j++;
            l++;
            
            
       }
       
        
        

    }
    j = j -2;
    temp = j;
    for(j ; j >= 0 ; j--){
        novafrase[k++] = espaso[j]; 
        
     }
     k = 0;
     int flag = 0;
     for(i = 0 ;  i < temp ; i++){
    
        if(novafrase[k++] != espaso[i]){
            flag = 1;
            break;


        }
        
     }


     if(flag){
        printf("NAO PALINDROMO");
     }
     else{
        printf("PALINDROMO");
     }
    






    return 0;
}