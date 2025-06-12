
#include <stdio.h>
void alfabeto(char v[]) {
    int j;
    int letra='A';
    for(j=0;j<20;j++) {
        v[j]= letra;
        letra++;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int m[n][n];
    int i,j,k;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&m[i][j]);
        }
    }
    int quant;
    int b=0;
    scanf("%d",&quant);
    for(b=0;b<quant;b++){
      
      char v[20] = {0};
    alfabeto(v);

    char c[32];
    scanf("%s",c);
     j=0;
    while(c[j]!='\0'){
         j++;
       }
        i=0,k=0;
       int nu[j+1];
    for(i=0;i<j;i++){
       
       for(k=0;k<20;k++){
            if(c[i] == v[k]){
                nu[i] = k;
                break;
            }
       }

    } int soma=0;
    int p=0;
    for(i=0;i<j-1;i++){
        if(m[nu[i]][nu[i+1]]== -1){
            p = 1;
            
        }
        else{
            soma = soma + m[nu[i]][nu[i+1]];
        }
    }
    if(p!=1){
        printf("Custo: %d\n",soma);
    }
    else{
        printf("Caminho invalido\n");
    }
    

    }

    
       

    return 0;
}