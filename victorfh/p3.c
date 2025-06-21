#include <stdio.h>
#include <stdlib.h>

int calcula_distancia(int **m, char *p)
{
     // [1]
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
            scanf("%d", &matriz[i][j]); // [2]
        }
    }

    scanf("%d", &num);
    
    char caminho[33];
    
    while(num--){
        scanf("%s", caminho);
        int custo = calcula_distancia(matriz, caminho); // [3]
    }

    char a = 'A';
    printf("%d", a); 

    for (i = 0; i < n; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

// Código incompleto

// [1] Grave: Função calcula_distancia está vazia.
// [2] Erro de índice: o loop externo usa j, mas a linha está usando i não inicializado.
// [3] Usa a função calcula_distancia que está vazia e não retorna nada.

