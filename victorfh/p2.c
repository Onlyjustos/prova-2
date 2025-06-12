#include <stdio.h>
#define n 200

int main()
{
    char frase[n];
    int i, j, fim = 0, palindromo = 0;
    scanf("%[^\n]%*c", frase);
    
    for (j = 0; j < n; j++)
    {

        if (frase[j] == '\0')
        {
            fim = j - 1;
            break;
        }
    }
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == frase[fim])
        {
            fim--;
            continue;
        }
        if (frase[i] == ' ')
        {
            continue;
        }
        if (frase[fim] == ' ')
        {
            fim--;
            i--;
            continue;
        }
        else if (frase[i] != frase[fim])
        {
            fim--;
            palindromo++;
        }
    }
    if (palindromo == 0)
    {
        printf("PALINDROMO\n");
    }
    else
    {
        printf("NAO PALINDROMO\n");
    }

    return 0;
}