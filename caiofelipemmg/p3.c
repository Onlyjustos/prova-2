#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, j, k, c, custo, invalido;
    int **matriz = NULL;
    n = i = j = k = c = custo = invalido = 0;

    scanf("%d", &n);

    matriz = malloc(n * sizeof(int*));

    for(i = 0; i < n; i++) {
        matriz[i] = malloc(n * sizeof(int));
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            matriz[i][j] = 0;
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    scanf("%d", &k);

    char caminhos[k][32];

    for(i = 0; i < k; i++) {
        for(j = 0; j < 32; j++) {
            caminhos[i][j] = '\0';
        }
    }

    while(c = getchar() != '\n');

    for(i = 0; i < k; i++) {
        scanf("%s", caminhos[i]);
    }

    j = c = 0;

    for(i = 0; i < k; i++) {
        while(caminhos[i][c] != '\n' && caminhos[i][c] != '\0') {
            c++;
        }

        for(j = 0; j < c - 1; j++) {
            if(matriz[caminhos[i][j] - 65][caminhos[i][j + 1] - 65] == -1) {
                invalido = 1;
                break;
            } else {
                custo += matriz[caminhos[i][j] - 65][caminhos[i][j + 1] - 65];
            }
        }

        if(invalido) {
            printf("Caminho invalido\n");
        } else {
            printf("Custo: %d\n", custo);
        }

        custo = j = c = 0;
        invalido = 0;
    }

    for(i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}