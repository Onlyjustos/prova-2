
#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int m[n][(n*(n+1)/2)];//[1][2]
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            scanf("%d",&m[i][j]);
        }
    }
    printf("ORIGINAL\n");
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("MODIFICADA\n");

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",m[i][j]*5);
        }
        printf("\n");
    }

    return 0;
}
//[1]: Não usou alocação dinamica
//[2]: Numero de colunas não faz sentido