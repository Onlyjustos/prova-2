 #include <stdio.h>

 int main() {
    int n, i, tam, j;

    scanf("%d", &n); 
    int m[n][n];


    for (i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(j <= i){ 
                scanf("%d", &m[i][j]);
            } else {
                m[i][j] = ' ';
            }
        }
    }

    printf("ORIGINAL\n");
    for (i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            m[i][j] *= 5;
        }
    }

    printf("MODIFICADA\n");
    for (i = 0; i < n; i++) {
        for(j = 0; j <= i; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    return 0;
 }