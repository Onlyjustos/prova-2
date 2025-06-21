    #include <stdio.h>
    #include <stdlib.h>
     
    int calcula_distancia( int **m, char * p ) {
        int ind=0;
        int linha;
        int coluna;
        int custo=0;
     
        while(1) {
            if(p[ind+1]=='\0') 
                return custo;
            linha=p[ind]-'A';
            coluna=p[ind+1]-'A';
            if(m[linha][coluna]==-1) 
                return -1;
            else if(linha!=coluna) custo+=m[linha][coluna];
            ind++;
        }
        return custo;
     
    }
     
     
    int main() {
        int N; 
        int **mat=NULL;
        char *string=NULL;
        int i;
        int l, c;
        int n_testes;
        int j;
        int custo_final;
     
        scanf("%d", &N);
     
        mat = (int **) malloc(N*sizeof(int*)); // [1]
        if(mat==NULL) {
            printf("ERRO AO ALOCAR A MATRIZ\n");
            return 0;
        }
        for(i=0;i<N;i++) {
            mat[i] = (int *) malloc(N*sizeof(int)); // [1]
        }
        for(l=0;l<N;l++) {
            for(c=0;c<N;c++) {
                scanf("%d", &mat[l][c]);
            }
        }
     
        scanf("%d%*c", &n_testes);
 
        for(j=0;j<n_testes;j++) {
             //Alocaçao da string
            string = (char *) malloc((32+1)*sizeof(char));
            if(string==NULL) {
                printf("ERRO AO ALOCAR O VETOR PARA STRING\n");
                return 0;
            }
            scanf("%[^\n]%*c", string);
            custo_final = calcula_distancia(mat, string);
            if(custo_final==-1) 
                printf("Caminho invalido\n");
            else 
                printf("Custo: %d\n", custo_final);
            //Liberando espaço da string
            free(string);
        }
     
        //Liberando espaço da matriz
        for(i=0;i<N;i++) {
            free(mat[i]);
        }
        free(mat);
        return 0;
    }

// [1] O código está correto, todavia, está dando runtime possivelmente porque assume que a entrada só irá conter letras entre 'A' e 'A' + N - 1.
