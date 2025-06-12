#include <stdio.h>
#include <stdlib.h>

#define MAX 20
#define MAX_CAMINHO 33 

int calcula_distancia(int **m, char *p) {
    int total = 0, i, origem, destino;

    for (i = 0; p[i + 1] != '\0'; i++) {
        origem = p[i] - 'A';
        destino = p[i + 1] - 'A';

        if (origem < 0 || origem >= MAX || destino < 0 || destino >= MAX)
            return -1;

        int dist = m[origem][destino];
        if (dist == -1) {
            return -1;
        }
        total += dist;
    }
    return total;
}

int main() {
    int n, i, j;
    int **matriz;
    char *caminho;

    scanf("%d", &n);

    matriz = (int**) calloc (n, sizeof(int*));

    for(i = 0; i < n; i++) {
        matriz[i] = (int*) calloc (n, sizeof(int));
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int k;
    scanf("%d", &k);

    caminho[MAX_CAMINHO];

    for (i = 0; i < k; i++) {
        scanf("%s", caminho);
        int custo = calcula_distancia(matriz, caminho);
        if (custo == -1) {
            printf("Caminho invalido\n");
        } else {
            printf("Custo: %d\n", custo);
        }
    }

    for(i = 0; i < n; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
