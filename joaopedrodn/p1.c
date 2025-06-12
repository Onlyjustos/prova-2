#include <stdio.h>
#include <stdlib.h>

//Quando uso alocação dinâmica ele não pontua 100% no Sharif
//Vou testar pra ver o que é -- Jotinha

int main() {
    int tamanho;
    int l, c;
    scanf("%d", &tamanho);
    int **matriz = malloc(tamanho*sizeof(int));
    int i;
    for(i=0;i<tamanho;i++) {
        matriz[i] = malloc(tamanho*sizeof(int));//[1]
    }
        for(l=0;l<tamanho;l++) {
            for(c=tamanho-1-l; c>=0 && c<=tamanho-1; c++) {
                scanf("%d", &matriz[l][c]);
            }
        }
        printf("ORIGINAL\n");
            for(l=0;l<tamanho;l++) {
                for(c=tamanho-1-l; c>=0 && c<=tamanho-1; c++) {
                    printf("%d ", matriz[l][c]);
                }
                printf("\n");
            }

        for(l=0;l<tamanho;l++) {
            for(c=tamanho-1-l; c>=0 && c<=tamanho-1; c++) {
                matriz[l][c] = 5 * (matriz[l][c]);
            }
        }
        printf("MODIFICADA\n");
        for(l=0;l<tamanho;l++) {
            for(c=tamanho-1-l; c>=0 && c<=tamanho-1; c++) {
                printf("%d ", matriz[l][c]);
            }
            printf("\n");
        }
        for ( i = 0; i < tamanho; i++) {
            free(matriz[i]);
        }
        free(matriz);
    return 0;
}