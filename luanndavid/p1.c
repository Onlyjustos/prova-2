#include <stdio.h>
#include <stdlib.h>


int main(){
    int **A = NULL;
    int m, l, c, k;
    int o = 1, i;

    scanf("%d", &m);

    //alocacao da matriz
    A = (int **)malloc(m * sizeof(int*));

    //aloc linha
    for(l = 0; l < m; l++){
        A[l] = (int *)malloc(m * sizeof(int));//[1]
        if (A[l] == NULL) {
            for (i = 0; i < l; i++) {
                free(A[i]);
            }
            free(A);
            return 1;
        }
    }

    //lendo a matriz
    for(l = 0; l < m; l++){
        for(c = 0; c < m; c++){
            if(c <= l){
                scanf("%d", &A[l][c]);
            }
        }
    }

    printf("ORIGINAL\n");

    //imprimindo a matriz
    for(l = 0; l < m; l++){
        for(c = 0; c < m; c++){
            if(c <= l){
                printf("%d ", A[l][c]);
            }
        }
        printf("\n");
    }

    printf("MODIFICADA\n");
      for(l = 0; l < m; l++){
        for(c = 0; c < m; c++){
            if(c <= l){
                printf("%d ", A[l][c] * 5);
            }
        }
        printf("\n");
    }

    for(l = 0; l < m; l++){
        free(A[l]);
    }
    free(A);

        

return 0;
}