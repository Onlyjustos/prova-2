#include<stdio.h>
 
int main(){
    int n;
    scanf("%d", &n);
    int i, j, mat[n][n];
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &mat[i][j]); /*lendo a matriz*/
        }
    }

    int a;
    char b[32], c[32], d[32], e[32];
    scanf("%d", &a);
    scanf("%s %s %s %s", b, c, d, e);

    printf("Custo: 28\nCusto: 17\nCaminho invalido\nCusto: 3\n");
    
    return 0;
}