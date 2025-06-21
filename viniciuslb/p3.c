#include <stdio.h>
#include <stdlib.h>

int tamanho_string(const char * a){
    int i = 0;
    do { 
        i++;
    }
    while(a[i] != '\0'); 
    return i;
}

/**
 * Função que recebe a matriz de distâncias, uma
 * string contendo o caminho percorrido e retorna
 * o custo do caminho dado. Caso o caminho seja invalido,
 * a função retorna -1.
 *
 * @param m Matriz de distâncias
 * @param p String contendo o caminho a ser percorrido
 * @return custo do caminho ou -1 caso o caminho seja invalido.
0 */
int calcula_distancia(int * m, char * p, const int size) {
    int t = tamanho_string(p);
    int i, j, *cidades;
    cidades = (int *) malloc(t * sizeof(int));

    for(i = 0; i < t; i++){
        cidades[i] = (int) p[i] - (int)'A';
    }

    int c1, c2, indice, custo = 0;
    for (i = 0; i < t; i++){ // [1]
        c1 = cidades[i];
        c2 = cidades[i+1]; // [1]
        indice = c1 * size + c2;
        if (m[indice] == -1) return -1;
        custo += m[indice];
    }

    free(cidades);
    
    return custo;
}

int main(){

    int n, i, k, j;
    int *matriz;
    char *caminhos;

    scanf("%d", &n);

    matriz = (int *) malloc(n * n * sizeof(int));

    for(i = 0; i < n*n; i++){
        scanf("%d", &matriz[i]);
    }

    scanf("%d", &k);

    caminhos = malloc(k + 1 * sizeof(char)); // [2]
    int size = k;
    for(i = 0; i < k; i++){
        scanf("%s", caminhos); 
        int custo = calcula_distancia(matriz, caminhos, n);
        if(custo != -1) printf("Custo: %d\n", custo);
        else if (custo = -1) printf("Caminho invalido\n"); // [3]
    }

    free(matriz);
    free(caminhos);

    return 0;
}


// [1] O loop vai até i < t, acessando cidades[i+1] na última iteração, que está fora do vetor.
// [2] Grave: Não está alocando memória suficiente para a string.
// [3] `else if (custo = -1)` usa atribuição, e não comparação.
