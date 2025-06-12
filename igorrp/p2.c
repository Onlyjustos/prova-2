#include <stdio.h>



int main(void)
{

char linha[201], inverso[201], linha_sem[201];
int i, tamanho = 0, j = 0;

fgets(linha, 201, stdin);

for (i = 0; linha[i] != '\0'; i++)
{
    if (linha[i] == '\n')
    {
        linha[i] = '\0';
    }
}

for (i = 0; linha[i] != '\0'; i++)
{
    if (linha[i] == ' ')
    {
        continue;
    }
    linha_sem[j++] = linha[i];
}
linha_sem[j] = '\0';
j = 0;


for (i = 0; linha_sem[i] != '\0'; i++)
{ 
   tamanho++;
}

for (i = tamanho - 1; i >= 0; i--)
{
    inverso[j] = linha_sem[i];
    j++;
}
inverso[j] = '\0';


for (i = 0; i < tamanho; i++)
{
    if (inverso[i] != linha_sem[i])
    {
        printf("NAO PALINDROMO\n");
        return 0;
    }
}

printf("PALINDROMO\n");
return 0;
}