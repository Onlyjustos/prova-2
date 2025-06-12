
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

       int k=0, n[j];
    for(i=0;i<j;i++){
        if(v[i]!=' '){
            n[k] = v[i];
            k++;
        }
    }
    int l=0, m[k];
    for(i=k-1;i>=0;i--){
        m[i] = n[l];
        l++;
    }
    for(i=0;i<k;i++){
        if(m[i]!= n[i]){
            printf("NAO PALINDROMO\n");
            return 0;
        }
    }   
    printf("PALINDROMO\n");
   

    return 0;
}