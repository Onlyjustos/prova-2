#include <stdio.h>
#include <stdlib.h>
  
int main(){
    int m,k,i,j;
    scanf("%d",&m);
    k = m*(m+1);
    int**matriz = (int**) malloc(m*sizeof(int*));
    for (i=0;i<m;i++){
    matriz[i] = (int*) malloc(m*sizeof(int));//[1]
    }
    
    for (i=0;i<m;i++) {
     for (j=0;j<=i;j++) {
     scanf("%d",&matriz[i][j]);
     }
    }
    
    printf("ORIGINAL\n");
    
    for (i=0;i<m;i++) {
     for (j=0;j<=i;j++) {
     printf("%d ",matriz[i][j]);
     }
     printf("\n");
    }
    
    printf("MODIFICADA\n");
    
    for (i=0;i<m;i++) {
     for (j=0;j<=i;j++) {
     matriz[i][j]*=5;
     }
    }
    
    for (i=0;i<m;i++) {
     for (j=0;j<=i;j++) {
     printf("%d ",matriz[i][j]);
     }
     printf("\n");
    }
    
    for (i=0;i<m;i++){
     free(matriz[i]);
    }
    
    free(matriz);
   
    return 0;
    
}
