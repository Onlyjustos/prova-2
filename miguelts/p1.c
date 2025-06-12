#include <stdio.h>
#include <stdlib.h>
#define DIM 100000//[1]

int main(){
    int i, j, k;
    int M;
    int **mat = NULL;
    scanf("%d", &M);
    k = 0;

    mat = (int **)malloc(DIM * sizeof(int*));//[1]

    for(i = 0; i < 5; i++){//[3]
        mat[i] = (int *)malloc(DIM * sizeof(int));//[2]
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
            if(j <= i){
                scanf("%d", &mat[i][j]);
            }

        }
    }

    printf("ORIGINAL\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
            if(j <= i) printf("%d ", mat[i][j]);

        }
        printf("\n");
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
            if(j <= i){
                mat[i][j] = mat[i][j]*5;
            }

        }
    }
    printf("MODIFICADA\n");
    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
            if(j <= i) printf("%d ", mat[i][j]);

        }
        printf("\n");
    }





    for(i = 0; i < DIM; i++){
        free(mat[i]);
    }
 
    free(mat);
    return 0;
}
//[1]: O tamanho é calculado pela primeira linha de input, no caso a variavel M que está recebendo esse valor;
//[3]: Só inicializa 5 linhas