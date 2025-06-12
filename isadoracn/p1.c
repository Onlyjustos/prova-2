
#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    int ordem;
 
    int **matriz = NULL;
 
    int **modificada = NULL;

    int a, x, i, j;

    int dim;
 
    scanf("%d", &ordem);

    dim = ordem * (ordem + 1) / 2;


 
    matriz = (int **)malloc(dim * sizeof(int));
 
    for(a = 0; a < (dim/2); a++){
        matriz[a] = (int *)malloc((dim/2) * sizeof(int));
    }
    
    if(matriz == NULL){
        exit(0);
    } 

    modificada = (int **)malloc((ordem/2)* sizeof(int));
 
    for(a = 0; a < ordem/2; a++){
        modificada[a] = (int *)malloc((ordem/2) * sizeof(int));
    }
    
    if(modificada == NULL){
        exit(0);
    } 
 
 
    for(i = 0; i < (ordem/2); i++){
        for(j = 0; j < (ordem/2); j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < (ordem/2); i++){
        for(j = 0; j < (ordem/2); j++){
            modificada[i][j] = matriz[i][j] * 5;
        }
    }


    for(i = 0; i < (ordem/2); i++){
        for(j = 0; j < (ordem/2); j++){
            printf("%d ", modificada[i][j]);
        }
        printf("\n");
    }
 
 
 ///enviado sem terminar, estava passando mal[1]
 
 
 
 
 
 
    return 0;
}
//[1]: Melhoras