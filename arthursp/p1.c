#include <stdio.h>
#include <stdlib.h>

int main(){
    int **m;
    int i, j, n, ma = 1;
    scanf("%d", &n);
    m = (int**)calloc (n, sizeof(int*));
    if(m == NULL){
        printf("Erro ao alocar memória\n");
        exit(0);
    }
    for(i = 0; i < n; i++){
        m[i] = (int*) calloc(ma, sizeof(int));
        if(m[i] == NULL){
            printf("Erro ao alocar memória\n");
            exit(0);
        }
        for(j = 0; j < ma;j++){
            scanf("%d", &m[i][j]);
        }
        ma++;
    }
    ma = 1;
    printf("ORIGINAL\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < ma; j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
        ma++;
    }
    ma = 1;
    printf("MODIFICADA\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < ma; j++){
            printf("%d ", m[i][j] * 5);
        }
        free(m[i]);
        printf("\n");
        ma++;
    }
    free(m);//[1]
    return 0;
}
//[1]: Não liberou as linhas