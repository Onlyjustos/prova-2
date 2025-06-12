#include <stdio.h>
#include <stdlib.h>

int calcula_distancia(int **m, char *p)
{

}

int main()
{
    int n, i, j, k, num;
    scanf("%d", &n);

    int **matriz = malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        matriz[i] = malloc(n * sizeof(int));
    }

    for(j=0; j<n; j++){
        for(k=0; k<n; k++){
            scanf("%d", &matriz[i][j]);
        }
    }

    scanf("%d", &num);
    
    char caminho[33];
    
    while(num--){
        scanf("%s", caminho);
        int custo = calcula_distancia(matriz, caminho);

    }
    char a = 'A';
    printf("%d", a);




    for (i = 0; i < n; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}
