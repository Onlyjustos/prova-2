#include <stdio.h>
#include <stdlib.h>

int main(){

    char *a=NULL;
    int i, r=0, h, j=0, ii=0;
    a= (int*)malloc(200*sizeof(char));
    if(a==NULL)return 0;
    scanf("%[^\n]", a);

    for(i=0; a[i]!='\0'; i++){
        if(a[i]==' '){

        }else{
            a[ii]=a[i];
            ii++;
        r++;
        }
    }
    a[ii]='\0';

    h=r-1;
    ii=0;
    int g=0, e=0;



    for(i=0; a[i]!='\0'; i++){
       // if()

        if(a[ii]==a[h]){
            j++;
           // printf("2:%c = %c\n",a[ii], a[h]);
        }
        h--;
        ii++;
    }


    if(j==r){
        printf("PALINDROMO\n");
    }else{
        printf("NAO PALINDROMO\n");
    }
    free(a);
    return 0;
}