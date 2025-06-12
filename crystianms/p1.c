#include <stdio.h>
#include <stdlib.h>

int main() {
        int **matriz, **matriz2;
        int linhas, colunas, i, j;
        scanf("%d", &linhas);
        colunas = linhas;
        // Aloca memória para as linhas (ponteiros para as colunas)
        matriz = (int **) malloc(linhas * sizeof(int *));//[1]
        matriz2 = (int **) malloc(linhas * sizeof(int *));//[2]

        if (matriz == NULL) {
            printf("Erro na alocação de memória!\n");
            return 1;
        }
        // Aloca memória para as colunas em cada linha
        for (i = 0; i < linhas; i++) {
            matriz[i] = (int *) malloc(colunas * sizeof(int));//[1]
            matriz2[i] = (int *) malloc(linhas * sizeof(int));
            if (matriz[i] == NULL) {
                printf("Erro na alocação de memória!\n");

                for (j = 0; j < i; j++) {
                    free(matriz[j]); // Libera memória alocada anteriormente
                }
                free(matriz); // Libera memória da matriz
                return 1;
            }
        }

        // Preenche e imprime a matriz
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < linhas; j++) {
                while(j<=i){
                scanf("%d", &matriz[i][j]);
                j++;
                }
            }
        }

         printf("ORIGINAL\n");
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                while(j<=i){
                printf("%d ", matriz[i][j]);
                j++;
            }
            }
            printf("\n");
        }
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < linhas; j++) {
                while(j<=i){
                matriz2[i][j] = matriz[i][j];
                matriz2[i][j] *=5;
                j++;
                }
            }
        }

        printf("MODIFICADA\n");
        for (i = 0; i < linhas; i++) {
            for (j = 0; j < colunas; j++) {
                while(j<=i){
                printf("%d ", matriz2[i][j]);
                j++;
            }
            }
            printf("\n");
        }
        
        // Libera a memória
        for (i = 0; i < linhas; i++) {
            free(matriz[i]); // Libera a memória de cada linha
        }
        free(matriz); // Libera a memória da matriz
        matriz = NULL;

        return 0;
    }
//[2]: A questão pede para usar apenas uma matriz