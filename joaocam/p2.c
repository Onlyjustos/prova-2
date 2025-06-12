#include <stdio.h>
#include <stdlib.h>

int main(){
    char txt[201];
    char rtxt[201];
    int i,last,s,f,j,m,sp;
    f = 0;
    sp = 0;
    for(i=0;i<201;i++){
        txt[i] = '\0';
    }
    for(i=0;i<201;i++){
        rtxt[i] = '\0';
    }
    scanf("%[^\n]%*c",txt);
    for(i=0;i<201;i++){
        if(txt[i]!=' '){
            rtxt[i] = txt[i];
        }
    }
    for(s=0;rtxt[s]!='\0';s++){}
    last = s;
    for(i=0;i<(last+1)/2;i++){
            if(rtxt[i]==rtxt[last-i-1]){
                f = 0;
            }
            else f = 1;
    }
    if(f==0){
        printf("PALINDROMO\n");
    }
    else printf("NAO PALINDROMO\n");
    return 0;
}