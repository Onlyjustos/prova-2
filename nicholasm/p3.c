#include <stdio.h>
#define dim 20
/**
* Função que recebe a matriz de distâncias, uma
* string contendo o caminho percorrido e retorna
* o custo do caminho dado. Caso o caminho seja invalido,
* a função retorna -1.
* @param m Matriz de distâncias
* @param p String contendo o caminho a ser percorrido
* @return custo do caminho ou -1 caso o caminho seja invalido.
*/
int calcula_distancia( int m[][dim], char * p ){
    int i, j;
    char inicio = *p;
    char destino = (*p)++; 
    int custo = 0;
    int invalido = 0;

    for(i = 'A'; i <= inicio; i++){ 
        if(i == inicio){
            for(j = 'A'; j <= destino; j++){ 
                if(j == destino){
                    if(m[i][j] == -1){
                        invalido = 1;
                    } else {
                        custo += m[i][j];
                    }
                }
            } 
        }
        inicio = destino;
        destino = destino++; 
        if( destino != '\0'){
            continue;
        } else {
            break;
        }
    }

    if(custo > 0){
        return custo;
    } else -1; // [1]

}

int main(){
    int matriz[dim][dim];
    int M, i, j;
    int custo = 0;
    scanf("%d", &M);

    for(i = 'A'; i < M + 65; i++){ // [2]
        for(j = 'A'; j < M + 65; j++){
        scanf("%d", &matriz[i][j]);
        }
    }
    
    int S;
    scanf("%d", &S);
    char vetor[32];

    for(i = 0; i < S; i++){
        scanf("%s", vetor);
        while(vetor[j] != '\0'){ // [3]
            j++;
        }

        custo = calcula_distancia(matriz, vetor);

        if(calcula_distancia){
            printf("Custo: %d\n", custo);
        } else {
            printf("Caminho invalido\n");
        }
    }
}

// [1] `else -1;` não retorna nada. 
// [2] Loop usando i de 'A' a 'A'+M é incorreto. Índices da matriz devem ser de 0 a M-1, não letras.
// [3] variável `j` usada sem ser inicializada antes do while. 
