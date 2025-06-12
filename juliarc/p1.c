#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int linhas, colunas;
    int i, j;

    scanf("%d", &linhas); //n° de linhas e algarismos da ultima
    colunas = linhas;

    int **matriz = (int **)malloc(linhas * sizeof(int *));
 
    if(matriz == NULL) {
        return 1;
    }
 
    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));//[1]
 
        if (matriz[i] == NULL) {
            return 1;
        }
    }
 
    // preencher a matriz e printar
    printf("ORIGINAL\n");
    int cont = 1;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas - (colunas - cont); j++) {
            scanf("%d", &matriz[i][j]);
            if(j != 0) printf(" ");
            printf("%d", matriz[i][j]);
        }
        cont++;
        printf("\n");
    }

    printf("MODIFICADA\n");
    int cont2 = 1;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas - (colunas - cont2); j++) {
            if(j != 0) printf(" ");
            printf("%d", matriz[i][j]*5);
        }
        cont2++;
        printf("\n");
    }


    // liberar memoria
    for (i = 0; i < linhas; i++) {
        free(matriz[i]);  
    }
    free(matriz);


    return 0;
}