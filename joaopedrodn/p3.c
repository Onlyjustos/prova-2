#include <stdio.h>

int calculadistancia(matriz, vet, tamanho) {
    int l, c;
    char vet[20]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'};
    for(l=0;l<tamanho;l++) {
        for(c=0;c<tamanho;c++) {

        }
    }

}

int main() {
    int tamanho, casos;
    int matriz[20][20];
    int c, l;
    scanf("%d", tamanho);
    for(l=0;l<tamanho;l++) {
        for(c=0;c<tamanho; c++) {
            scanf("%d", &matriz[l][c]);
        }
    }
    int i;
    char vet[32];
    for(i=0;i<casos;i++) {
        scanf("%s", &vet[i]);
    }
    int distancia;
    for(i=0;i<casos; i++) {
    distancia=calculadistancia(matriz, vet, tamanho);
        if(distancia==-1) {
            printf("Caminho invalido");
        }
        else {
            printf("Custo: %d", distancia);
        }
    }
    return 0;
}