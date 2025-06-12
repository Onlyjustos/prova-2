#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, k, num, a, b, antes = 0, l, m, u = 0;
    scanf("%d", &n);

    k = n * (n + 1) / 2;

    int *numero = malloc(k * sizeof(int));
    for (u = 0; u < k; u++)
    {
        scanf("%d", &numero[u]);
    }

    int **matriz = malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        matriz[i] = malloc(n * sizeof(int));//[1]
    }

    a = b = 0;
    /*while (k--)
    {
        scanf("%d", num);
        for (a = 0; a < n; a++)
        {
            for (b = 0; b <= antes + 1; b++)
            {
                matriz[a][b] = num;
                antes = b;
            }
            antes = b = 0;
        }
    }*/

    u = 0;
    for (a = 0; a < n; a++)
    {
        for (b = 0; b < antes + 1; b++)
        {
            matriz[a][b] = numero[u++];
        }
        antes = b;
        b = 0;
    }

    printf("ORIGINAL\n");
    antes = 0;
    for (l = 0; l < n; l++)
    {
        for (m = 0; m < antes + 1; m++)
        {
            printf("%d ", matriz[l][m]);
        }
        printf("\n");
        antes = m;
        m = 0;
    }

    printf("MODIFICADA\n");
    antes = 0;
    for (l = 0; l < n; l++)
    {
        for (m = 0; m < antes + 1; m++)
        {
            printf("%d ", (matriz[l][m]) * 5);
        }
        printf("\n");
        antes = m;
        m = 0;
    }

    for (j = 0; j < n; j++)
    {
        free(matriz[j]);
    }
    free(matriz);
    free(numero);

    return 0;
}