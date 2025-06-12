#include <stdio.h>

int calcula_distancia(int dim, int m[dim][dim], char *p) {
    //linha depois coluna em dupla => AC = A para C = m[A][C] = m[0][3];
    //A[0][0], B[1][1], C[2][2], D[3][3], E[4][4];
    int camint[33], i, j, tam = 0;
    int sum = 0;

    //IMPRESSÃO TESTE DA MATRIZ
    // printf("Matriz:\n");
    // for (i = 0; i < 21 ; i++) {
    //     for (j = 0; j < 21; j++) {
    //         printf("%d ", m[i][j]); 
    //     }
    //     printf("\n");
    // }

    //passar o char de caminho pra numeros;
    //tamanho de cam;
    while(p[tam] != '\0') {
        tam++;
    }
    // printf("tam = %d\n", tam);

    for(i = 0; i<tam ; i++) {
        camint[i] = p[i] - 'A';
        // printf(" %d", camint[i]);
    }
    // printf("\n");

    for(i = 0; i < tam-1 ; i++) {
        sum += m[camint[i]][camint[i+1]];
        if(m[camint[i]][camint[i+1]] == -1) return -1;
        // printf("%d\n", m[camint[i]][camint[i+1]]);
        // printf("%d %d \n", camint[i], camint[i+1]);
        // printf("%d\n", sum);
    }


    return sum;
}

int main() {

    int n, i, j, quant, res;
    char cam[33];
    scanf("%d", &n);
    int m[n][n];

    for(i = 0; i<n; i++) {
        for(j = 0; j<n; j++) {
            scanf("%d", &m[i][j]);
            //printf("%d", m[i][j]);
        }
    }
     
    scanf("%d", &quant); //numeor de casos
    for(i = 0; i<quant; i++) {
        scanf("%s", cam);
        getchar();
        //printf("%s", cam);
        res = calcula_distancia(n, m, cam);
        if(res == -1) printf("Caminho invalido\n");
        else printf("Custo: %d\n", res);
    }

    //lembrando como funciona subtrair letras
    // char a[2] = {'a', 'b'};
    // int b, c;
    // b = a[0] - 'a';
    // c = a[0];
    // printf("%d = %d\n", c, b);
    // b = a[1] - 'a';
    // c = a[1];
    // printf("%d = %d\n", c, b);
    
    return 0;
}