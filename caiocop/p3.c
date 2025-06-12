#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, n2, i, l, c, j;
    int origem = 0, destino, dist = 0; 
    int cont;
        int distancias[20][20];
        char rota[33];
        int num[32];
     
        scanf("%d", &n);
     
        if (n <= 0 || n > 20)
        {
            printf("caminho invalido\n");
            return 0;
        }

        for(l = 0; l < n; l++){
        for(c = 0; c < n; c++){
            scanf("%d", &distancias[l][c]);
        }
        }
        scanf("%d", &n2);
     
        for (j = 0; j < n2; j++)
        { 
            cont = 0;
            scanf("%s", &rota[j]);
            for(i = 0; rota[i]!='\0'; i++){
           
            if(rota[i] == 'A'){
                num[i]=0;
            }
            else if(rota[i] == 'B'){
                num[i]=1;
            }
             else if(rota[i] == 'C'){
                num[i]=2;
            }
             else if(rota[i] == 'D'){
                num[i]=3;
            }
             else if(rota[i] == 'E'){
                num[i]=4;
            };
            cont ++;
        }
        int distanciaF = 0;
            for (i = 0; i < cont - 1; i++)
            {
                origem = num[i];
                destino = num[i + 1];
                dist = distancias[origem][destino];
                if (dist == -1)
                {
                    printf("Caminho invalido\n");
                }
                distanciaF += dist;
            }
    
        printf("Custo: %d\n", distanciaF); 
            
}
        
 return 0;
}