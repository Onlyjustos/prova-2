#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[200],rts[200];
    int i=0,j;
    scanf("%[^\n]", str);
    
    int bool = 1;
    
    for (j=strlen(str)-1;j>=0;j--){
        if(str[j]==' ') continue;
        else{
            rts[i] = str[j];
            i++;
        }
        if(j==0){
            rts[i]='\0';
        }
    }
    for (i=0,j=0;i<strlen(rts);i++){
        if(str[i]==' ') continue;
        
        
        if (str[i]!=rts[j]){
           printf("%c\n",str[i]);
           printf("%c\n",rts[j]);
            bool = 0;
            break;
        }
        j++;
    }
    printf("%s\n",str);
    printf("%s\n",rts);
    printf("%d\n",strlen(str));
    printf("%d\n",strlen(rts));
    bool?printf("ANAGRAMA"):printf("NAO ANAGRAMA");

}