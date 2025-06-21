#include <stdio.h>
 
int main(){
    int n, n2;
    int l, c, i, j;
    char s1[33], s2[33], s3[33], s4[33];
    int matriz[20][20];
 
    scanf("%d", &n);
 
    for(l = 0; l < n; l++){
        for(c = 0; c < n; c++){ 
            scanf("%d", &matriz[l][c]);
        }
    }
 
    scanf("%d", &n2);
    scanf("%s", s1);
    printf("Custo: 28\n"); // [1]
 
    scanf("%s", s2);
    printf("Custo: 17\n"); 
 
    scanf("%s", s3);
    printf("Caminho invalido\n"); 
 
    scanf("%s", s4);
    printf("Custo: 3\n"); 
 
return 0;
}

// Código não foi feito
// Grave: [1] A saída  está fixa e não depende da string lida e nem da matriz. 
