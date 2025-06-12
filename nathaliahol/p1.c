#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, k, i, j, **m=NULL;
    scanf("%d", &n);

    k = n*(n+1)/2;
    int k1=1;
    m = (int**)malloc(n*sizeof(int*));
    if(m==NULL)return 0;

    for(i=0; i<n; i++){
        for(j=0; j<k1; j++){
            m[i] =(int*)malloc(n*sizeof(int));//[1]
            if(m[i]==NULL){
                free(m);
                return 0;}
        }
    }

    for(i=0; i<n; i++){
        if(k1<=k){
            for(j=0; j<k1; j++){
                scanf("%d", &m[i][j]);
            }
        }
        k1++;
    }
    k1=1;

printf("ORIGINAL\n");
    for(i=0; i<n; i++){
        if(k1<=k){
            for(j=0; j<k1; j++){
                printf("%d ", m[i][j]);
            }
        }
        printf("\n");
        k1++;
    }
k1=1;

printf("MODIFICADA\n");
    for(i=0; i<n; i++){
        if(k1<=k){
            for(j=0; j<k1; j++){
                printf("%d ", m[i][j]*5);
            }
        }
        printf("\n");
        k1++;
    }

    free(m);


    return 0;
}
//[1] Alocou mais do que deveria