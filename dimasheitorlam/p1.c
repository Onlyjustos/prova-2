#include <stdio.h>
#include <stdlib.h>

int n, i, j;
int** M = NULL;//[1]

int main()
{
    scanf("%d", &n);

    //alocando

    M = (int**)malloc(n * sizeof(int*));
    if (M == NULL)
    {
        printf("Nao foi possivel alocar");
        return 0;
    }

    for (i = 0; i < n; i++)
    {
        M[i] = (int*)malloc((i + 1) * sizeof(int));
        if (M[i] == NULL)
        {
            printf("Nao foi possivel alocar");
            for (j = 0; j < i; j++)
            {
                free(M[j]);
            }
            free(M);
        }
    }

    //lendo
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }

    //imprimindo original
    printf("ORIGINAL\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    //modificando
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            M[i][j] *= 5;
        }
    }

    //imprimindo modificada
    printf("MODIFICADA\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    //desalocando
    for (i = 0; i < n; i++)
    {
        free(M[i]);
    }
    free(M);

    return 0;
}
//[1]: Não recomendo alocar dinamicamente fora do main;