#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, lin=0, col=0, num, size=0, tamanho;

    //tamanho da matriz
    scanf("%d%*c", &n);
    tamanho=n;
    n*=n;
    size = (n*(n+1)/2);
    int * tam = (int *)calloc(size, sizeof(int));//[1]

    //conteudo da matriz;
    for(lin=0; lin<=tamanho; lin++){
    
        for(col=0; col<lin; col++){

            scanf("%d%*c", &num);
            tam[lin*n + col] = num;

        }
    }

    //iMPRIME MATRIZ e muda valor
    printf("ORIGINAL");
    for(lin=0; lin<=tamanho; lin++){
    
        for(col=0; col<lin; col++){
            printf("%d", tam[lin*n + col]);
            tam[lin*n + col]*=5;
            if(col != lin){
                printf(" ");
            }
        }
        printf("\n");
    }
    
    printf("MODIFICADA");

    for(lin=0; lin<=tamanho; lin++){
    
        for(col=0; col<lin; col++){
            printf("%d", tam[lin*n + col]);
            if(col < lin){
                printf(" ");
            }
        }
        printf("\n");
    }

    free(tam);
    return 0;
}

//[1]: Usou um vetor e nao uma matriz