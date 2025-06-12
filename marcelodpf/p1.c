#include <stdio.h>

int main(){
int i, j;
int N;
scanf("%d", &N);
int mat[N][N];//[1]


for ( i = 0; i < N; i++){
    for( j = 0; j < N; j++){
        if( j > i){
            mat[i][j] = 0;
        }
        else{
        scanf("%d", &mat[i][j]);
        }
        }
}
    printf("ORIGINAL\n");
for ( i = 0; i < N; i++){
    for( j = 0; j < N; j++){
        if (mat[i][j] == 0){
            printf("\n");
        }
        else{
        printf("%d", mat[i][j]);
        if (j < N - 1) printf(" "); // espaço entre os dois elementos
        }
            }
 
        
        }



        for ( i = 0; i < N; i++){
            for( j = 0; j < N; j++){
                mat[i][j] *= 5;
            }
        }
        printf("\n");
printf("MODIFICADA\n");
for ( i = 0; i < N; i++){
    for( j = 0; j < N; j++){
        if (mat[i][j] == 0){
            printf("\n");
        }
        else{
        printf("%d", mat[i][j]);
        if (j < N - 1) printf(" "); // espaço entre os dois elementos
        }
            }
 
        
        }


    return 0;
}
//[1]: Alocação não dinamica