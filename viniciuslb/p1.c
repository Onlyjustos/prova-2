#include <stdio.h>
#include <stdlib.h>

int main(){

    int M, i, j, n;

    scanf("%d", &M);

    int *m_original, *m_quintuplo;

    m_original = (int *) calloc(M * M, sizeof(int));//[1]
    m_quintuplo = (int *) calloc(M * M, sizeof(int));

    
    int indice;
    for(i = 0; i < M; i++){

        for(j = 0; j <= i; j++){
            indice = i * M + j;
            scanf("%d", &m_original[indice]);
            m_quintuplo[indice] = m_original[indice] * 5;
        }
    }

    printf("ORIGINAL\n");
     for(i = 0; i < M; i++){
        for(j = 0; j <= i; j++){
            indice = i * M + j;
            printf("%d ", m_original[indice]);
        }
        printf("\n");
    }
    printf("MODIFICADA\n");
     for(i = 0; i < M; i++){
        for(j = 0; j <= i; j++){
            indice = i * M + j;
            printf("%d ", m_quintuplo[indice]);
        }
        printf("\n");
    }
    free(m_original);
    free(m_quintuplo);
    m_original = NULL;
    m_quintuplo = NULL;




    return 0;
}
//[1]: Usou vetor no lugar de matriz