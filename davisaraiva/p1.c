#include <stdio.h>
#include <stdlib.h>
 
int main(){
    //enviando outro codigo de aluno
    int i, j, k;
    int M;
    int **mat = NULL;
    scanf("%d", &M);
    k = 0;
 
    mat = (int **)malloc(10000 * sizeof(int*));//[1]
 
    for(i = 0; i < M; i++){
        mat[i] = (int *)malloc(10000 * sizeof(int));
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
 
 
 
 
 
    for(i = 0; i < M; i++){
        free(mat[i]);
    }
 
    free(mat);
    return 0;
}