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
    int matriz [n][n], l, c; // [1]
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
            c = 'A' + j; // [2]
        }
 
        scanf("%d", &k);
 
        int m;
 
        for(m=0; m<k; m++)
        {
            for(i=0; str[i] != '\0'; i++) 
            {
                fgets(str, 101, stdin); // [3]
            }
        }
 
    //calcula_distancia(matriz[l][c], * str); // [4]
 
    return 0;
}

// [1] Erro: matriz[n][n] usa n antes de ser inicializado. 
// [2] Essa atribuição de `l` e `c` com base em `'A' + j` não faz sentido funcional aqui. 
// [3] `fgets(str, 101, stdin)` está dentro de um loop desnecessário. Além disso, o buffer pode não ser limpo corretamente após o `scanf` anterior. 
// [4] A função `calcula_distancia` está comentado e não implementado. 
