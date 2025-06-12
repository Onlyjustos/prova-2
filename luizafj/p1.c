#include <stdio.h>

int main()
{

int n;

    scanf("%d", &n);

        int matriz[n][n], l, c;//[1]
        int resultante[n][n];//[2]
        int i,j;

        for(l=0;l<n; l++)
            for(c=0; c<n; c++)
            {                   
                scanf("%d", &matriz[l][c]);
            }

        for(i=0; i<=n; i++)
            for(j=0; i=n; j++)
        {
            resultante[i][j] = matriz[i][j] * 5;
        }
        
    for(l = 0; l < n; l++)
   {
    for(c = 0; c < n; c++)
    {
        printf("%d", resultante[l][c]);
        if(c < 1) printf(" "); 
    }
       printf("\n");
   }

/*
não sei usar malloc :')
*/


    return 0;
}//[1]: Aprender a usar malloc