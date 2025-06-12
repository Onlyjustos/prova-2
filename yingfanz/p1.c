#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **M=NULL;
    int n;
    int c=0;
    int i;
    scanf("%d",&n);
    M=(int**)calloc(n,sizeof(int*));
    while(c<n)
    {
        for(i=0;i<=c;i++)
        {
            M[i]=(int*)calloc(c,sizeof(int));
        }
        c++;
    }
    c=0;
    while(c<n)
    {
        for(i=0;i<=c;i++)
        {
            scanf("%d",&M[c][i]);
        }
        c++;
    }
    c=0;
    while(c<n)
    {
        for(i=0;i<=c;i++)
        {
            M[c][i]=(M[c][i])*5;
        }
        c++;
    }
    c=0;
    printf("ORIGINAL\n");
    while(c<n)
    {
        for(i=0;i<=c;i++)
        {
            printf("%d ",(M[c][i])/5);
        }
        printf("\n");
        c++;
    }
    c=0;
    printf("MODIFICADA\n");
    while(c<n)
    {
        for(i=0;i<=c;i++)
        {
            printf("%d ",M[c][i]);
        }
        printf("\n");
        c++;
    }
    c=0;
    for(c=0;c<n;c++)
    {
        free(M[c]);
    }
    free(M);
    return 0;
}