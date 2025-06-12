#include <stdio.h>
#include <stdlib.h>


int main(){
    int matriz[3][3];
    int n;
    int i, j;
    int K, M;
    
    
    scanf("%d", &n);


 matriz = calloc(3* sizeof(int*));
        for (i = 0, i < 3; i++){
            matriz[i] = calloc (3*sizeof(int));
            
        }
        

            for(i = 0; i < 3; i++){
                free(matriz[i]);
            }


                 for (i = 0; i < n; i++){
                         for (j = 0; j < n; j++){
                            scanf ("%d", &matriz[i][j]);
                                    K++;
            }
        }

        if (n == 1){
            printf ("5\n");
            1 * 5;
        }
        if (n == 2){
           printf("2 * 5");
        }
        if (n == 3){
            printf("3 * 5");
        }
        if (n == 4){
            printf("4 * 5");
        }
        if (n == 5){
            printf("5 * 5");
        }
        if (n == 6){
            printf("6 * 5");
        }
        if (n = 7){
            printf("7 * 5");
        }
        if (n == 8){
           printf("8 * 5");
        }
        if (n == 9){
           printf("9 * 5");
        }
        

      K = M * (M +1)/2;
         printf ("%d\n", K);
        






            free(matriz);



    return 0;
}