#include <stdio.h>

int calcula_distancia(int matriz[100][100], char seq[]);

int main(void)
{
    int n, i, j, caminhos;
    scanf("%d", &n);
    int matriz[100][100];
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    scanf("%d", &caminhos);
    
    while (caminhos--)
    {
        char seq[101];
        scanf("%s", seq);

        int custo = calcula_distancia(matriz, seq);
        if (custo == -1)
        {
            printf("Caminho invalido\n");
        }
        else
        {
            printf("Custo: %d\n", custo);
        }
    }

    return 0;
}

int calcula_distancia(int matriz[100][100], char seq[])
{
    int dist = 0, i;
    for (i = 0; seq[i + 1] != '\0'; i++)
    {
        int origem = seq[i] - 'A';
        int destino = seq[i + 1] - 'A';

        if (matriz[origem][destino] == -1)
        {
            return -1;
        }
        dist += matriz[origem][destino];
    }
    return dist;
}
