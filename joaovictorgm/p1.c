
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n, i, j,k= 0 ;
    int **matriz;
    int **novamatriz;
    
    scanf("%d", &n);
 
  
    matriz = (int **) malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        matriz[i] = (int *) malloc(n * sizeof(int));//[1]
    }

    novamatriz = (int **) malloc(n * sizeof(int *));//[2]
    for (i = 0; i < n; i++) {
        novamatriz[i] = (int *) malloc(n * sizeof(int));
    }

      for(i = 0 ; i < n ; i++){
        for(j = 0 ; j <= k ; j++){
            scanf("%d",&matriz[i][j]);
             

        }
        k++;
        
        
    }
    k = 0;
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j <= k ; j++){
            novamatriz[i][j]= matriz[i][j] *5;
            

        }
        k++;
         
        
    }
    k = 0;
    printf("ORIGINAL\n");

    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j <= k ; j++){
            printf("%d ",matriz[i][j]);
        

        }
        k++;
        printf("\n");
        
        
    }
    k= 0;
    printf("MODIFICADA\n");
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j <= k ; j++){
            printf("%d ",novamatriz[i][j]);
        
       }
        k++;
        printf("\n");
        
        
    }
    for (i = 0; i < n; i++) {
        free(matriz[i]);
        free(novamatriz[i]);
    }
    free(matriz);
    free(novamatriz);

}