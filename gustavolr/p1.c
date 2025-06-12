#include <stdio.h>
#include <stdlib.h>
#define s scanf
 
int main()
{
    int m;
    s("%d", &m);
    int k = m * (m + 1) / 2;
 
    int **x;
    x = (int **)malloc(m * sizeof(int*));
    int i;
    for (i = 0; i < m; i++) {
        x[i] = (int*)malloc(m * sizeof(int));//[1]
    }
    int j;
    for (i = 0; i < m; i++) {
        j = 0;
        while(j <= i) {
            scanf("%d", &x[i][j]);
            j++;
        }
    }
    printf("ORIGINAL\n");
    for (i = 0; i < m; i++) {
        j = 0;
        while(j <= i) {
            printf("%d ", x[i][j]);
            j++;
        }
        printf("\n");
    }
    printf("MODIFICADA\n");
    for (i = 0; i < m; i++) {
        j = 0;
        while(j <= i) {
            printf("%d ", x[i][j] * 5);
            j++;
        }
        printf("\n");
    }
    for (i = 0; i < m; i++) {
        free(x[i]);
    }
    free(x);
 
    return 0;
}