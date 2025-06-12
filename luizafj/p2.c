#include <stdio.h>

/*

Passo a passo: 

1- Ler uma string. 
2- Varrer a string. 
3- Inverter a string. 
4- Passar a inversa para uma nova string. (mds n consigo fazer)
5- Varrer as duas strings. 
6- Verificar se seus conteúdos são IGUAIS. 
7- Se igual = palíndromo, se não= não palindromo. 

*/

void inverteString(char str[])
{

    int i, j, k;
    char holder;
    int tamanho=0;

        for(k=0; str[k] != '\0'; k++)
        {
            tamanho++;
        }

        for(i=0, j=tamanho-1; i<j; i++, j--)
        {

        holder = str[i];
        str[i] = str[j];
        str[j] = holder;
        
        }

}


int main()
{

    char frase[200]; //199+'\0'.
    char inversa[200];
    int i, j, k, l; //variáveis de controle.
    char holder;
    int palindromo=0, nao_palindromo=0;

    

        fgets(frase, 200, stdin);

        //Preciso copiar a string frase para a string inversa.
        //Mas como? Não lembro como faz sem a biblioteca. T-T

        for(i=0, j=0; frase[i] != '\0', inversa[j] != '\0'; i++, j++)
        {
            holder = frase[i];
            frase[i] = inversa[j];
            inversa[j] = holder;

        }

        inverteString(frase); //ok, função funciona.

        for(k=0; frase[k] != '\0'; k++)
        for(l=0; inversa[l] != '\0'; l++)
        {
            if(frase[k] == inversa[l])
            {
                palindromo++;
            } else {
                nao_palindromo++;
            }
        }
        
        if(palindromo > nao_palindromo)
        {
            printf("PALINDROMO\n");
        } else {
            printf("NAO PALINDROMO\n");
        }
        
        
    return 0;
}



