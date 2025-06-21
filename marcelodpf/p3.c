#include <stdio.h>
 
int calcula_distancia( int m[20][20], char * p ){
int soma = 0;
int valor;
int valor2;
 
while (*p != '\0'){
    
    // [2]
    if (*p == 'A')valor =0;
 
    if (*p == 'B')valor =1;
 
    if (*p == 'C')valor =2;
 
    if (*p == 'D')valor =3;
 
    if (*p == 'E')valor =4;
 
    char a = p++; 
    if (a == 'A')valor2 =0;
 
    if (a == 'B')valor2 =1;
 
    if (a == 'C')valor2 =2;
 
    if (a == 'D')valor2 =3;
 
    if (a == 'E')valor2 =4;
 
    int loc = valor2 - (valor);
    if (loc < 0) loc = -loc;
 
    if (m[valor][loc] == -1) return -1; 
 
    soma += m[valor][loc];
 
    p++;
}
 
return soma;
}
 
int main(){
int i, j;
int N;
 
scanf ("%d", &N);
if (N > 20)return 0;
 
int mat[N][N];
 
for ( i = 0; i < N; i++){
    for( j = 0; j < N; j++){
        scanf("%d", &mat[i][j]);
        }
}
 
int M;
scanf("%d", &M);
char string[33];
 
for ( i = 0; i < M; i++){
    fgets(string, sizeof(string), stdin); 
    int distancia = calcula_distancia( mat, string);
    if (distancia = -1) // [1]
    {
        printf("Caminho invalido\n");
    }
    else {
    printf("Custo: %d\n", distancia);
    }
}
 
return 0;
}

// [1] Erro de atribuição: `if (distancia = -1)` faz uma atribuição, não uma comparação. 
// [2] A função não trata letras fora de A–E.
