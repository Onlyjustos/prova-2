#include <stdio.h>

void junta_str(char *str, char * nstr,int *tam){
    int i,j=0;
    for(i=0;str[i]!=0;i++){
        if(str[i]!=' '){
            nstr[j] = str[i];
            j++;
        }
    }
    *tam = j-1;
}

void inverte_str(char *nstr,char *istr,int tam){
    int i;

    for(i=0;nstr[i]!=0;i++){
        istr[i] = nstr[tam-i];
    }

}

int main(){
    char str[201]={},nstr[201]={},istr[201]={};
    int tam=0,i;

    
    junta_str(str,nstr,&tam);
    inverte_str(nstr,istr,tam);
    printf("%s",nstr);
    for(i=0;nstr[i]!=0;i++){
        if(nstr[i]!=istr[i]){
            printf("NAO PALINDROMO\n");
            return 0;
        }
    }
    printf("PALINDROMO\n");

    return 0;
}
