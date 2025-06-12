#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int M, i, j;
    scanf("%d", &M);

    int **matriz = (int **) malloc(M * sizeof(int *));
    for (i = 0; i < M; i++) 
    {
        matriz[i] = (int *) malloc((i + 1) * sizeof(int));
    }

   
    for (i = 0; i < M; i++) 
    {
        for (j = 0; j <= i; j++)
         {
            scanf("%d", &matriz[i][j]);
         }
    }

    
    printf("ORIGINAL\n");
    for (i = 0; i < M; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

  
    for (i = 0; i < M; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            matriz[i][j] *= 5;
        }
    }

  
    printf("MODIFICADA\n");
    for (i = 0; i < M; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < M; i++) 
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
