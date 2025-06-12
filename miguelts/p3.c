#include <stdio.h>
#include <stdlib.h>
#define dim 20

int tamanho_string(char str[]) {
    int tam = 0;
    while (str[tam] != '\0') {
        tam++;
    }
    return tam;
}

int calcula_distancia( int m[dim][dim], char * p ){
    int i, j, k;
    int custo = 0;
    int tam = tamanho_string(p);
    int vet[tam];//[1]
    for(i = 0; i < tam; i++){
        vet[i] = p[i] - 65;
    }

    for(i = 0; i < tam - 1; i++){
        if(m[vet[i]][vet[i + 1]] == -1){
            return -1;
            
        }
        custo = custo + m[vet[i]][vet[i + 1]];
    }

    return custo;



}

int main(){
    int i, j;
    int k;
    int l, c;
    int N;
    scanf("%d", &N); //dimensao da matriz
    int mat[dim][dim];

    //int **mat = NULL;
    //mat = (int **)malloc(dim * sizeof(int*));

    //for(i = 0; i < N; i++){
    //    mat[i] = (int *)malloc(dim * sizeof(int));
    //}

    for(l = 0; l < N; l++){  //lendo a matriz
        for(c = 0; c < N; c++){
            scanf("%d", &mat[l][c]);
        }
    }
 //quantidade de caminhos que deseja avaliar
    scanf("%d%*c", &k);

    for(i = 0; i < k; i++){
        
        int vet[2];
        char str[33];
        scanf("%[^\n]%*c", str);

        int i, j;
        int dist = 0;

        dist = calcula_distancia(mat, str);
        if(dist == -1){
            printf("Caminho invalido\n");
        }
        else printf("Custo: %d\n", dist);




    }











    //for(i = 0; i < N; i++){
    //    free(mat[i]);
    //}
    //free(mat);


    return 0;
}
//[1] Vetor alocado não fixamente
