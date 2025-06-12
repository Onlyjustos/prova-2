#include <stdio.h>
#include <stdlib.h>

int n, i, j;


int main()
{
    int** M;
    scanf("%d", &n);

    M = malloc(n * sizeof(int*));
    if (M == NULL)
    {
        printf("Nao foi possivel alocar");
        return 0;
    }

    for (i = 1; i <= n; i++){
        M[i] = malloc(i * sizeof(int));
    }

    for (i = 0; i < n; i++){
        for (j = 0; j <= i; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }

    printf("ORIGINAL\n");
    for (i = 0; i < n; i++){
        for (j = 0; j <= i; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    printf("MODIFICADA\n");
    for (i = 0; i < n; i++){
        for (j = 0; j <= i; j++)
        {
            printf("%d ", M[i][j]*5);
        }
        printf("\n");
    }

    
    for (i = 0; i < n; i++){
        free(M[i]);
    }
    free(M);

    return 0;
}