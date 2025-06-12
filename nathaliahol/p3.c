#include <stdio.h>
#include <stdlib.h>

//#define dim 5

int calcula_distancia(int **m, char *p){
    int i, v1, v2, j, s=0;
    char w[20]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'};
    for(i=0; i<20; i++){
        if(p[0]==w[i]){
            v1 = i;
        }
    }

    for(j=1; p[j]!='\0'; j++){
        for(i=0; i<20; i++){
            if(p[j]==w[i]){
                v2 = i;
            }
        }
        if(m[v1][v2]==-1){
                return -1;
    
        }else{
            s+=m[v1][v2];
        }
        v1 = v2;

    }

 return s;
}

int main(){
    int n, **a=NULL, i, j, n2;
    char *caminho=NULL;

    scanf("%d", &n);

    a=(int**)malloc(n*sizeof(int*));
    if(a==NULL)return 0;

    caminho=(char*)malloc(21*sizeof(char));
    if(caminho==NULL)return 0;


    for(i=0; i<n; i++){
        a[i] =(int*)malloc(n*sizeof(int));
        if(a[i]==NULL){
            free(a);
            return 0;
            }
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);
    }     }
   

    scanf("%d", &n2);

    while(n2--){
        scanf("%s", caminho);
        int y =calcula_distancia(a, caminho);
        if(y==-1){
            printf("Caminho invalido\n");
        }else{
            printf("Custo: %d\n", y);
        }
    }
free(a);//[1]
free(caminho);
    return 0;
}
//[1]: Não liberou as linhas da matriz