#include <stdio.h>
#include <stdlib.h>

#define num_cities 20
#define path_length 32
 
int n;
int M[num_cities][num_cities];
 
int calcula_distancia(int m[num_cities][num_cities], char* p)
{
    int i, j;
    int dist = 0;
 
    for (i = 1; p[i] != '\0'; i++)
    {
        int start = p[i - 1] - 'A', end = p[i] - 'A';
        if (m[start][end] == -1)
            return -1;
        else
            dist += m[start][end];
    }
 
    return dist;
}
 
int main()
{
    int i, j;
    scanf("%d", &n);
 
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &M[i][j]);
 
    int k;
    scanf("%d%*c", &k);
    for (i = 0; i < k; i++)
    {
        char p[path_length];
        scanf("%s%*c", p);
        int dist = calcula_distancia(M, p);
 
        if (dist == -1)
            printf("Caminho invalido\n");
        else
            printf("Custo: %d\n", dist);
    }
 
    return 0;
}