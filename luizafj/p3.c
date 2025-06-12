#include <stdio.h>

/*
Dá pra transformar as linhas e colunas em letras pela tabela ASCII.
*/

////int calcula_distancia( int matriz[][], char * str)
//{




//}






int main()
{

    int n; //dimensão matriz.
    int matriz [n][n], l, c;
    int k; //caminhos. 
    char str[101];
    int i, j;

        scanf("%d", &n);
        for(l=0;l<n; l++)
            for(c=0; c<n; c++)
            {                   
                scanf("%d", &matriz[l][c]);
            }

        for(j=0; j<n; j++)
        {
            l = 'A' + j;
            c = 'A' + j;
        }

        scanf("%d", &k);

        int m;

        for(m=0; m<k; m++)
        {
            for(i=0; str[i] != '\0'; i++)
            {
                fgets(str, 101, stdin);
            }
        }

    //calcula_distancia(matriz[l][c], * str);

    return 0;
}