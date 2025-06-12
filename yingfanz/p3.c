#include<stdio.h>
#include<stdlib.h>
#define dim 20
int my_strlen(char *p)
{
    int count=0;
    char*r=p;
    while(*r!='\0')
    {
        count++;
        r++;
    }
    return count;
}
int calcula_distancia(int m[][dim],char*p)
{
    char*x=p;
    int tamanho=my_strlen(x);
    int i=0;
    int count=0;
    int linha,coluna;
    while(i<tamanho-1)
    {
        linha=(x[i])-'A';
        coluna=(x[i+1])-'A';
        if(m[linha][coluna]!=-1)
        {
            count+=m[linha][coluna];
        }
        else
        {
            return -1;
            break;
        }
        i++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int** M=NULL;
    int i;
    int x,y;
    int vez;
    int z;
    char caminho[33];
    int distancia;
    M=(int**)calloc(n,sizeof(int*));
    for(i=0;i<n;i++)
    {
        M[i]=(int*)calloc(n,sizeof(int));
    }
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            scanf("%d",&M[x][y]);
        }
    }
    scanf("%d",&vez);
    for(z=0;z<vez;z++)
    {
        scanf("%[^\n]",caminho);
        getchar();
        distancia=calcula_distancia(M,caminho);
        if(distancia!=-1)
        {
            printf("Custo: %d\n",distancia);
        }
        else
        {
            printf("Caminho invalido\n");
        }
    }
    for(i=0;i<n;i++)
    {
        free(M[i]);
    }
    free(M);
    return 0;
}