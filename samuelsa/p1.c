#include <stdio.h>
#include <stdlib.h>

int main() {
    int **mat=NULL;
    int N;
    int i, j;
    int l;
    int k;
    int c;
    int nl;
    int dif=0;


    scanf("%d", &N);

    mat = (int **) malloc(N*sizeof(int*));

    if(mat==NULL) {
        printf("ERRO AO ALOCAR\n");
        return 0;
    }
    for(i=0;i<N;i++) {
        mat[i] = (int *) malloc(N*sizeof(int));//[1]
        if(mat[i]==NULL) {
            printf("ERRO AO ALOCAR\n");
            return 0;
        }
    }
    c=0;
    for(l=0;l<N;l++) {
        if(l!=0) {
            k=((l+1)*(l+1+1))/2;
            k = k-dif;
            dif+=k;
        } else {
            k=((l+1)*(l+1+1))/2;
            dif+=k;
        }
        for(j=0;j<k;j++) {
            scanf("%d", &mat[c][j]);
        }
        c++;
    }
    dif=0;
    c=0;
    printf("ORIGINAL\n");
    for(l=0;l<N;l++) {
        if(l!=0) {
            k=((l+1)*(l+1+1))/2;
            k = k-dif;
            dif+=k;
        } else {
            k=((l+1)*(l+1+1))/2;
            dif+=k;
        }
        for(nl=0;nl<k;nl++) {
            if(nl!=k-1) printf("%d ", mat[c][nl]);
            else printf("%d", mat[c][nl]);
        }
        c++;
        printf("\n");
    }
    dif=0;
    c=0;
    printf("MODIFICADA\n");
    for(l=0;l<N;l++) {
        if(l!=0) {
            k=((l+1)*(l+1+1))/2;
            k = k-dif;
            dif+=k;
        } else {
            k=((l+1)*(l+1+1))/2;
            dif+=k;
        }
        for(nl=0;nl<k;nl++) {
            if(nl!=k-1) printf("%d ", mat[c][nl]*5);
            else printf("%d", mat[c][nl]*5);
        }
        c++;
        printf("\n");
    }
    

    for(i=0;i<N;i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}