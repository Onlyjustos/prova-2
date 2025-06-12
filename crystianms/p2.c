#include <stdio.h>
#include <string.h>
#define MAX 200
    int main()
    {
        int n, i=0,cont=0, a=0, j=0;
        char txt[MAX], txt2[MAX];
        scanf("%[^\n]", txt);
        n = strlen(txt);
    

        n = strlen(txt);

        while (n--)
        {
            txt2[i] = txt[n];
            i++;
        }

        n = strlen(txt);
        for (i=0;i<n;i++)
        {
            if (txt[j]==32)
            {
                j++;
            }
            else if (txt2[a]==32)
            {
                a++;
            }
            if (txt[j]==txt2[a]){
                cont++;
                
            }
        }
        if (cont==n)
        {
            printf("PALINDROMO\n");
        }
        else
        {
            printf("NAO PALINDROMO\n");
        }

       
        return 0;
    }
    //[1] Grave: uso errado de indice, o programa não testa todos as letras como deveria 