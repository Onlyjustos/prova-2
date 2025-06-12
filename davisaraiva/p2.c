#include <stdio.h>
 
int main()
{
    char v[200];
    scanf("%[^\n]",v);
    int j = 0;
    int i=0;
       while(v[j]!='\0'){
         j++;
       }
       char n[j]; //[1]
    int k=0;
    for(i=j-1;i>=0;i--){
        n[i] = v[k];
        k++;
    }//[2]
    
   
   
    for(i=0;i<j;i++){ //[3]
        if(v[i]!= n[i]){
            printf("NAO PALINDROMO\n");
            return 0;
        }
    }   
    printf("PALINDROMO\n");
    /*while(i<j){
 
        if(v[i]!=v[j]){
            printf("NAO PALINDROMO\n");
            return 0;
        }
        j--;
        i++;
    }
       printf("PALINDROMO\n");*/
    
    return 0;
}
//[1] vetor de inteiros, alocação errada de vetor

//[3] programa nao ignora os espaços