#include <stdio.h>
#include <stdlib.h>
#define INF -1
int main()
{
    int m;
    scanf("%d", &m);
   
    int **x;
    x = (int **)malloc((m+10) * sizeof(int*));
    int i;
    for (i = 0; i < m; i++) {
        x[i] = (int*)malloc((m+10) * sizeof(int));
    }
    int j;
    
    for( i = 0; i < m; i++){
        for( j = 0; j < m; j++){
            x[i][j] = INF;
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &x[i][j]);
        }
    }
    int k;
    scanf("%d", &k);
    
    // getchar();
    while ((getchar()) != '\n' && !feof(stdin));

    
    
    while (k--) {
        
        char *text;
        text = (char*)malloc(33 * sizeof(char));
        
        fgets(text, 33*sizeof(char), stdin);
        char * temp = text;
        int tam = 0;
        while(*temp != '\0') {
            if (*temp == '\n') break;
            tam++;
            temp++;
        }
        
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
 
 
 
 
 
 
        
    } 
    
 
    return 0;
}