#include <stdio.h>
#include <stdlib.h>

int calcula_distancia( int m[][20], char * p ){
    int i,l,c,soma=0,tam=0;

    for(i=0;p[i]!=0;i++){
        tam++;
    }

    for(i=0;i<(tam-1);i++){
        l = p[i] - 65;
        c = p[i+1] - 65;

        if(m[l][c]==-1){
            return -1;
        }

        soma += m[l][c];

    }

    return soma;
}

int main(){
    int n,i,j,rep, mt[20][20]={},res;
    char cam[33]={};

    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mt[i][j]);
        }
    }

    scanf("%d",&rep);
    getchar();

    while(rep--){
        scanf("%[^\n]",cam);
        getchar();
        res = calcula_distancia(mt,cam);
        if(res==-1){
            printf("Caminho invalido\n");
        } else {
            printf("Custo: %d\n",res);
        }
        for(i=0;cam[i]!=0;i++){
            cam[i] = 0;
        }
    }
    return 0;
}

