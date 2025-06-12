#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, soma = 0, j, k = 0;
    scanf("%d", &n);

    for(i = 0; i<=n; i++){
        soma += i;
    }
    int numorig[soma];//[1]
    int nummodif[soma];
    for(i = 0; i<soma; i++){
        scanf("%d", &numorig[i]);
        nummodif[i] = numorig[i] * 5;
    }

    printf("ORIGINAL\n");

    for(i = 1; i<=n; i++){
        for(j = 0; j<i; j++){
            printf("%d ", numorig[k++]);
        }
        printf("\n");
    }
    printf("MODIFICADA\n");

    k = 0;
    
    for(i = 1; i<=n; i++){
        for(j = 0; j<i; j++){
            printf("%d ", nummodif[k++]);
        }
        printf("\n");
    }
    

    return 0;
}
//[1]: Não usou alocação dinamica