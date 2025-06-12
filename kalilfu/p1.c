#include <stdio.h>
#include <stdlib.h>
 
int main () {
    int ordem, x=0, y, linhas;
    int **matriz_original, **matriz_alterada;
 
    scanf("%d", &ordem);
 
    linhas = (ordem*(ordem + 1)) / 2;

    matriz_original = (int**) calloc (ordem, sizeof(int*));
    matriz_alterada = (int**) calloc (ordem, sizeof(int*));//[2]
 
    while(x < ordem) {
        matriz_original [x] = (int*) calloc (linhas, sizeof(int));//[1]
        matriz_alterada[x] = (int*) calloc (linhas, sizeof(int));
        x++;
    }
    x = 0;
    while( x < ordem) {
        for(y = 0; y < ordem; y++) {
            if(x + y <= 2*x) {
                scanf("%d", &matriz_original[x][y]);
                matriz_alterada[x][y] = 5 * matriz_original[x][y];
            } 
        }
        x++;
    }
    printf("ORIGINAL\n");
    for(x = 0; x < ordem; x++) {
        for(y = 0; y < ordem; y++) {
                if(x == 0 && y == 0) {
                    printf("%d", matriz_original[x][y]);
                } else if (x + y <= 2*x){
                    printf("%d ", matriz_original[x][y]);
                }
            }
        printf("\n");
    }
 
 
    printf("MODIFICADA\n");
 
    for(x = 0; x < ordem; x++) {
        for(y = 0; y < ordem; y++) {
                if(x == 0 && y == 0) {
                    printf("%d", matriz_alterada[x][y]);
                } else if((x == y) || (x + y < 2*x)){
                    printf("%d ", matriz_alterada[x][y]);
                }
        }
            printf("\n");
    }
 
    //Lembrar de liberar memoria
    for(x = 0; x < ordem; x++) { 
        free(matriz_original[x]);
        free(matriz_alterada[x]);
    }
 
    free(matriz_original);
    free(matriz_alterada);
 
    return 0;
}