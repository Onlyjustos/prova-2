#include <stdio.h>
#include <stdlib.h>

int**modifica(int**A,int n){
    int i,j;
    int** B = NULL;
    B = (int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
        B[i] = malloc((i+1)*sizeof(int));
    for(i=0;i<n;i++){
       for(j=0;j<i+1;j++){
            B[i][j] = 5*A[i][j];
       } 
    }
    return B;
}
int main(){
    int n,i,j,k,s,z,f,f2;
    f2 = 0;
    f = 0;
    scanf("%d",&n);
    int**A = NULL;
    A = (int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
        A[i] = malloc((i+1)*sizeof(int));
    for(s=0;s<n;s++){
        for(z=0;z<s+1;z++){
            scanf("%d",&A[s][z]);
        }
    }
    int **mod = modifica(A,n);//[1]
    for(j=0;j<n;j++){
        if(f == 0){
            printf("ORIGINAL\n");
            f = 1;
        }
        for(k=0;k<j+1;k++){
            printf("%d ",A[j][k]);
        }
        printf("\n");
    }
    for(j=0;j<n;j++){
        if(f2 == 0){
            printf("MODIFICADA\n");
            f2 = 1;
        }
        for(k=0;k<j+1;k++){
            printf("%d ",mod[j][k]);
        }
        printf("\n");
    }
    return 0;
}
//[1]: A questao pede uma matriz