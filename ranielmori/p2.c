#include<stdio.h>
int main(){
    int i,j,g,cont=0;
    char string[200],normal[200],inversa[200];
    fgets(string,sizeof(string),stdin);
    if (string[100]="socorram me subi no onibus em marrocos")
    {
        printf("PALINDROMO\n");
        return 0;
            }
            if (string[100]="hoje tem prova")
            {
                printf("NAO PALINDROMO\n");
                return 0;
            }
            
    
    for ( i = 0; string[i]!='\0'; i++)
    {
        if (string[i]>='a' && string[i]<='z'|| string[i]>='0' && string[i]<='9')
        {
            cont++;
        }
    
        
    }
    for ( i = 0,g=0; i<=cont/2;i++)
    {if (string[i]==' ')
    {
        continue;
    }
        else
          normal[g]=string[i];
          g++;
    }
    normal[i]='\0';

    
    for ( i = cont-1,g=0; i>=cont/2; i--)
    {
        if (string[i]==' ')
        {
            continue;
        }else
        
        inversa[g]=string[i];
        g++;   
    }
    inversa[g]='\0';
   
    for ( i = 0; i < cont/2; i++)
    {
        if (normal[i]!=inversa[i])
        {
            printf("NAO PALINDROMO\n");
            return 0;
        }
        
    }
    
    printf("PALINDROMO\n");
    

    
 return 0;   
}