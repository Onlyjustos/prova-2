#include <stdio.h>
#include <stdlib.h>


int **matriz = NULL;

int main(){
    int N, k;
    scanf("%d", &N);
    int vetor[N*(N+1)/2];
    int i, j;
    int count = 0;
    

    for(i = 0; i < N*(N+1)/2; i++){
        vetor[i] = 0;
    }

    matriz = (int**) calloc (N, sizeof(int*));

    if(matriz == NULL){
        free(matriz);
        return 0;
    }
    
    for(i = 0; i < N; i++){
        matriz[i] = (int*) calloc(N, sizeof(int));//[1]
        if(matriz[i] == NULL){
            free(matriz);
        }
        
    }

    for(i = 0; i < N*(N+1)/2; i++){
        scanf("%d", &vetor[i]);
    }

    
    for(i = 0; i < N; i++){
        int TemColunas = 0;
        for( j = 0; j < N; j++ ){
            matriz[i][j] = vetor[count++];
            if(i == j){
                break;
            } 
        }
    }

    printf("Original\n");//[2]

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){//[1]
            printf("%d ", matriz[i][j]);
            if(matriz[i][j+1] == 0){
                printf("\n");
                break;
            }
        }
    }
    
    printf("Modificada\n");

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){//[1]
            printf("%d ", 5 * matriz[i][j]);
            if(matriz[i][j+1] == 0){
                printf("\n");
                break;
            }
        }
    }

    for(i = 0; i < N; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
//[1]: Não alocou e fez os loops na quantidade correta
//[2]: O shariff deu 0 por estar tudo maiusculo