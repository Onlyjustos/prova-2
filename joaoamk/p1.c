#include <stdio.h>
#include <stdlib.h>

int main () {
    int ordem, i, j, linhas;
    int **matriz_original, **matriz_alterada;

    scanf("%d", &ordem);

    linhas = (ordem*(ordem + 1)) / 2;

    //Garantir que não haja lixo de memoria
    matriz_original = (int**) calloc (ordem, sizeof(int*));//[1]
    matriz_alterada = (int**) calloc (ordem, sizeof(int*));//[2]

    for(i = 0; i < ordem; i++) {
        matriz_original [i] = (int*) calloc (linhas, sizeof(int));
        matriz_alterada[i] = (int*) calloc (linhas, sizeof(int));
    }

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            if(i + j <= 2*i) {
                scanf("%d", &matriz_original[i][j]);
                matriz_alterada[i][j] = 5 * matriz_original[i][j];
            } 
        }
    }

    printf("ORIGINAL\n");

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
                if(i == 0 && j == 0) {
                    printf("%d", matriz_original[i][j]);
                } else if (i + j <= 2*i){
                    printf("%d ", matriz_original[i][j]);
                }
            }
        printf("\n");
    }


    printf("MODIFICADA\n");

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
                if(i == 0 && j == 0) {
                    printf("%d", matriz_alterada[i][j]);
                } else if((i == j) || (i + j < 2*i)){
                    printf("%d ", matriz_alterada[i][j]);
                }
        }
            printf("\n");
    }

    //Lembrar de liberar memoria
    for(i = 0; i < ordem; i++) { 
        free(matriz_original[i]);
        free(matriz_alterada[i]);
    }

    free(matriz_original);
    free(matriz_alterada);

    return 0;
}
//[1]: Numero de colunas alocadas errado;
//[2]: A questao pede apenas uma matriz