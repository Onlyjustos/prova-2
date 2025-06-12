#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int tam, i, j;
    int k = 0;
    int **matriz_antiga;
    int **nova_matriz;
    scanf("%d", &tam);

    matriz_antiga = (int **) malloc(tam * sizeof(int *));

    for (i = 0; i < tam; i++) {
        matriz_antiga[i] = (int *) malloc(tam * sizeof(int));//[1]
    }
    nova_matriz = (int **) malloc(tam * sizeof(int *));//[2]
    for (i = 0; i < tam; i++) {
        nova_matriz[i] = (int *) malloc(tam * sizeof(int));
    }
      for(i = 0 ; i < tam ; i++){
        for(j = 0 ; j <= k ; j++){
            scanf("%d",&matriz_antiga[i][j]);
        }
        k++;
    }
    k = 0;
    for(i = 0 ; i < tam ; i++){
        for(j = 0 ; j <= k ; j++){
            nova_matriz[i][j]= matriz_antiga[i][j] *5; /*guardando valores para a nova matriz*/
        }
        k++;
         
        
    }
    k = 0;
    printf("ORIGINAL\n");
 
    for(i = 0 ; i < tam ; i++){
        for(j = 0 ; j <= k ; j++){
            printf("%d ",matriz_antiga[i][j]);
        }
        k++;
        printf("\n");
        
        
    }
    k= 0;
    printf("MODIFICADA\n");
    for(i = 0 ; i < tam ; i++){
        for(j = 0 ; j <= k ; j++){
            printf("%d ",nova_matriz[i][j]);
        
       }
        k++;
        printf("\n");
        
        
    }
    for (i = 0; i < tam; i++) {
        free(matriz_antiga[i]);
        free(nova_matriz[i]);
    }
}
//[2]: A questão pede para usar a mesma matriz