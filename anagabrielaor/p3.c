#include <stdio.h>

/**
* Função que recebe a matriz de distâncias, uma
* string contendo o caminho percorrido e retorna
* o custo do caminho dado. Caso o caminho seja invalido,
* a função retorna -1.
*
* @param m Matriz de distâncias
* @param p String contendo o caminho a ser percorrido
* @return custo do caminho ou -1 caso o caminho seja invalido.
*/
int calcDistancia(int m[][32], char *p, int n);

int main() {
    int n, i, j, k, custo;

    scanf("%d", &n); //ler n da matriz n x n
    int m[n][n]; //matriz distancias

    for(i = 0; i < n; i++) { //loop de leitura
        for (j = 0; j < n; j++) {
            scanf("%d", &m[i][j]); //ler elementos da matriz n x n
        }
    }
    scanf("%d", &k); //ler quantos caminhos
    char c[32]; //string caminho

    for(i = 0; i < k; i++) { //loop de caminho
        scanf("%s", c); //le caminho

        custo = calcDistancia(m, c, n);
        if (custo == -1) {
            printf("Caminho invalido\n");
            return 0;
        }
        printf("Custo: "); //printa caminho
        printf("%d\n", custo);
    }

    return 0;
}

//==================================
int calcDistancia(int m[][32], char *p, int n) {
    int i, j, count = 0, k=0, a, b;

    

    while(p[k+1] != '\0') {
            a = (p[k] - 65); //posição do numero
            b = (p[k+1] - 65); 

            if(m[a][b] == -1) return -1;

            if (p[k] == p[k+1]) {
                count += 0;
            } else {
                count += m[a][b];
            }
        k++;
    }
    return count;
}

//'A' == 65
// 'Z' == 