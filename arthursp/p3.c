
#include <stdio.h>
#include <stdlib.h>

int size(char *v)
{
    int k = 0;
    while (v[k] != '\0')
    {
        k++;
    }
    return k;
}
int main()
{
    int n, j, i, dim, custo, l, k;
    int **m;
    char *c;
    scanf("%d", &dim);
    m = (int **)calloc(dim, sizeof(int *));
    if (m == NULL)
    {
        printf("Erro ao alocar memória\n");
        exit(0);
    }

    for (i = 0; i < dim; i++)
    {
        m[i] = (int *)calloc(dim, sizeof(int));
        if (m[i] == NULL)
        {
            printf("Erro ao alocar memória\n");
            exit(0);
        }
        for (j = 0; j < dim; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    scanf("%d", &n);
    c = (char *)calloc(32, sizeof(char));
    if (c == NULL)
    {
        printf("Erro ao alocar memória\n");
        exit(0);
    }
    for (i = 0; i < n; i++)
    {
        int w = 0;
        scanf("%s", c);
        k = size(c);
        custo = 0;
        for (j = 0; j < k; j++)
        {
            c[j] -= 65;
        }
        for (l = 0; l < k - 1; l++)
        {
            if (m[c[l]][c[l + 1]] != -1)
            {
                custo += m[c[l]][c[l + 1]];
            }
            else
            {
                printf("Caminho invalido\n");
                w++;
                break;
            }
        }
        if(w == 0){
            printf("Custo: %d\n", custo);
        }
    }
    free(m);
    free(c);
    for(i = 0; i < dim; i++){
        free(m[i]);
    }
    return 0;
}
