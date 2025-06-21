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
    scanf("%s %s %s %s", b, c, d, e); // [1]
 
    printf("Custo: 28\nCusto: 17\nCaminho invalido\nCusto: 3\n"); // [2]
    
    return 0;
}

// Grave: [1] Os caminhos são lidos como strings, mas nenhum processamento real é feito para calcular os custos a partir da matriz.
// Grave: [2] A saída é fixa, não depende da entrada. O programa não calcula nada. 
