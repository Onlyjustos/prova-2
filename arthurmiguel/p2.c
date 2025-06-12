#include <stdio.h>

  int  TamanhoV (  char txt [])  {
        int cont = 0 ;
           
            while ( txt [ cont]  !=  '\0' )  {
            
             cont ++;
            }        
             
         return cont ;
    }



 int main () {
   
   int i, j, x = 0;
   char vet[201];

   scanf("%[^\n]" , vet);
 
   for (i = 0; vet[i] != '\0'; i++){
    if (vet[i] != ' ') {
        vet[x] = vet[i];
         x++;
    }  
   }vet[x] = '\0';

   int t = TamanhoV(vet);
   
   
   for (i = 0 ; i < t; i ++) {
     
      if (vet[i] != vet[t-1-i]) {
        int a = t -1 -i;
        printf("NAO PALINDROMO\n");
        return 0;
      }

   } printf("PALINDROMO\n");

    return 0;
 }