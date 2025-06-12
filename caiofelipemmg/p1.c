#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i, j, k;
    n = i = j = 0;
    k = 1;
    int **m = NULL;

    scanf("%d", &n);

    m = malloc(n * sizeof(int*));

    for(i = 0; i < n; i++) {
        m[i] = malloc(n * sizeof(int));//[1]
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < k; j++) {
            m[i][j] = 0;
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < k; j++) {
            scanf("%d", &m[i][j]);
        }

        k++;
    }

    printf("ORIGINAL\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(m[i][j] != 0) {
                printf("%d ", m[i][j]);
            }
        }

        printf("\n");
    }

    printf("MODIFICADA\n");

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(m[i][j] != 0) {
                printf("%d ", m[i][j] * 5);
            }
        }

        printf("\n");
    }

    for(i = 0; i < n; i++) {
        free(m[i]);
    }

    free(m);

    return 0;
}