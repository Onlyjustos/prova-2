#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INF -1
int main()
{
    int m;
    scanf("%d", &m);
   
    int **x;
    x = (int **)malloc(m * sizeof(int*));
    int i;
    for (i = 0; i < m; i++) {
        x[i] = (int*)malloc(m * sizeof(int));
    }
    int j;

    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &x[i][j]);
        }
    }
    int k;
    scanf("%d", &k);
    
    char cancel;
    scanf("%c", &cancel);
    
    
    while (k--) {
        char text[50];
        scanf("%s", text);
    //     char *text;
    // text = (char*)malloc(34 * sizeof(char));
    
 
    // // Lê linha inteira
    // for (i = 0; i < 34; i++) {
    //     char cur;
    //     scanf("%c", &cur);
    //     if (cur >= 'A' && cur <= 'A' + m - 1) text[i] = cur;
    //     else {
    //         text[i] = '\0';
    //         break;
    //     }
    // }
    
    int tam= strlen(text);
    
    // while(text[tam] != '\0' && text[tam] != '\n' && (text[tam] >= 'A' && text[tam] <= 'Z')) {
    //     tam++;
    // }
    //printf("texto:");
        //for ( i = 0; i < tam; i++) printf("%c", text[i]);
        //printf("tamanho: %d", tam);
        int distancia_total = 0;
        int rota_valida = 1;
    
        for (i = 0; i < tam - 1; i++)
        {
            int origem = text[i] - 'A';
            int destino = text[i + 1] - 'A';
    
            // Verifica se há acesso entre origem e destino
            if (x[origem][destino] == INF)
            {
                rota_valida = 0;
                break;
            }
            else
            {
                distancia_total += x[origem][destino];
            }
        }
        
    
        if (rota_valida)
        {
            printf("Custo: %d\n", distancia_total);
        }
        else
        {
            printf("Caminho invalido\n");
        }
        
        //free(text);
        
 
        
    } 
     for (i = 0; i < m; i++) {
         free(x[i]);
     }
     free(x);
 
    return 0;
}