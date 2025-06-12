#include<stdio.h>
#include<stdlib.h>
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
int main()
{
    char str[201];
    char str_new[201];
    int i;
    int j=0;
    int tamanho;
    int x,y;
    int count=0;
    int q;
    scanf("%[^\n]",str);
    getchar();
    tamanho=my_strlen(str);
    for(i=0;i<tamanho;i++)
    {
        if(str[i]!=' ')
        {
            str_new[j]=str[i];
            j++;
        }
    }
    str_new[j]='\0';
    //printf("%s\n",str_new);
    q=my_strlen(str_new);
    //printf("%d\n",q);
    y=q-1;
    if(q%2==0)
    {
        for(x=0;x<(q/2);x++)
    {
        if(str_new[x]==str_new[y])
        {
            count++;
        }
        y--;
    }
    if(count==q/2)
    {
        printf("PALINDROMO\n");
    }
    else
    {
        printf("NAO PALINDROMO\n");
    }
    }
    else
    {
        for(x=0;x<(q/2);x++)
        {
            if(str_new[x]==str_new[y])
        {
            count++;
        }
        y--;
        }
        if(count==q/2)
    {
        printf("PALINDROMO\n");
    }
    else
    {
        printf("NAO PALINDROMO\n");
    }
    }
    return 0;
}