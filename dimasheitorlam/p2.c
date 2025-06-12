#include <stdio.h>
#include <stdlib.h>

#define TAM 500
 
char s[TAM], str[TAM];

int str_tamanho()
{
    int size = 0;
    while (str[size] != '\0')
        size++;
    return size;
}
 
int palindromo()
{
    int size = str_tamanho();
 
    int i;
    for (i = 0; i < (size / 2); i++)
    {
        if (str[i] != str[size - i - 1])
            return 0;
    }
    return 1;
}
 
int main()
{
    scanf("%[^\n]%*c", s);
 
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            str[j] = s[i];
            j++;
        }
    }
    
    if (palindromo())
        printf("PALINDROMO\n");
    else
        printf("NAO PALINDROMO\n");
 
    return 0;
}