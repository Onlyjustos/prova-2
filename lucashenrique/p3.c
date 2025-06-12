#include <stdio.h>
#include <stdlib.h>
#

char route[32];
  
int main(){
    int n, k, i, j;
    scanf("%d",&n);
    int**matriz = (int**) malloc(n*sizeof(int*));
    for (i=0;i<n;i++) {
        matriz[i] = (int*) malloc(n*sizeof(int));
    }
    for (i=0;i<n;i++){
      for (j=0;j<n;j++){
        scanf("%d",&matriz[i][j]);
    }
    }
    
    scanf("%d",&k);
  
    for (i=0;i<k;i++) {
        int inv = 0, custo = 0;
        for (j=0;j<32;j++){
        route[j] = '\0';
        }
        scanf("%s",route);
        for (j=0;j<32;j++){
            if (route[j+1] == '\0') break;
            if (matriz[route[j]-65][route[j+1]-65] == -1) inv = 1;
            custo+= matriz[route[j]-65][route[j+1]-65];
        }
        if (!inv)
        printf("Custo: %d\n",custo);
        else
        printf("Caminho invalido\n");
        
    }
    for (i=0;i<n;i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
    
}

