#include <stdio.h> 
#include <stdlib.h>

int main () {

    int n, i, j, k = 1;
      scanf("%d" , &n);
  
  int **mat = NULL;
  mat = (int **)malloc(n * sizeof(int*));

  for (i = 0; i< n;i++) {
     mat[i] = (int *)malloc(n * sizeof(int));//[1]
  }

    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++){
       scanf("%d" ,&mat[i][j]);
        } k ++;
    }
       k = 1;
       printf("ORIGINAL\n");
     for (i = 0; i < n; i++) {
        for (j = 0; j < k; j ++){

         printf ("%d " , mat[i][j]);

        } printf("\n");
         k++;    
    }
       k = 1;
       printf("MODIFICADA\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j ++){

         printf ("%d " , mat[i][j] * 5);

        } printf("\n");
         k++;    
    } 

     for (i = 0; i < n; i++) {
        free(mat[i]);
     }
     free(mat);



    return 0;
}
//[1]: Alocou mais do que precisava