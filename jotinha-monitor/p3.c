#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define dim 5
int calcula_distancia(int m[][dim],char * p){
    int i,preco=0;
    for(i=0;p[i]!='\0';i++){
        if(p[i+1]=='\0') break; //para antes de encontrar o \0
        if(m[p[i]-65][p[i+1]-65] == -1){  //caso tenha um -1, para
            return -1;
        }
        preco += m[p[i]-65][p[i+1]-65]; //Uso a letra para acessar o indice A == [0], B == [1],etc
        
    }
    return preco;
}
int main(){
    int n;
    scanf("%d",&n);
    int matriz[dim][dim];//matriz de cidades
    int i,j,k;
    char trecho[32]; //string do caminho escolhido
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matriz[i][j]);
        }
    }
    scanf("%d",&k);
    
    for(i=0;i<k;i++){
        scanf("%s",trecho);
        if(calcula_distancia(matriz,trecho)==-1){   //caminho caso tenha caminho invalido
            printf("Caminho invalido");
        }else{
            printf("%d\n",calcula_distancia(matriz,trecho)); //caminho normal
        }
        
    }
    
    
    return 0;
}
