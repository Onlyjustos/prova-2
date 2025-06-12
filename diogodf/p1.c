#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j, **mt = NULL;

    scanf("%d",&n);

    mt = (int**)malloc(n*sizeof(int*));

    for(i=0;i<n;i++){
        mt[i] = (int*)malloc(n*sizeof(int));//[1]
    }

    for(i=0;i<n;i++){
        for(j=0;j<(i+1);j++){
            scanf("%d",&mt[i][j]);
        }
    }
    

    printf("ORIGINAL\n");
    for(i=0;i<n;i++){
            for(j=0;j<(i+1);j++){
                printf("%d ",mt[i][j]);
            }
            printf("\n");
    }

    printf("MODIFICADA\n");
    for(i=0;i<n;i++){
            for(j=0;j<(i+1);j++){
                printf("%d ",mt[i][j]*5);
            }
            printf("\n");
    }
    //[2]
    return 0;
}
//[2]: Não liberou a memoria