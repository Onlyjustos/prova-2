#include<stdio.h>
 
 
int main (){
    int i, j, k =0, tamanho = 0, controle = 0, dim, n;

    scanf("%d", &dim);

    char atual, proximo;
    int m[dim][dim];
    int dist[dim*dim]; 
    char caminho[32];
    int dist_tot = 0;

    for(i = 0; i<dim; i++){
        for(j = 0; j < dim; j++){
            scanf("%d", &m[i][j]);
                        dist[k++] = m[i][j];
        }
    }
    scanf("%d", &n);
    getchar(); 

    while(n--){
        controle = 0;
        dist_tot = 0;
        fgets(caminho , 32, stdin);
            for(i = 0; caminho[i]!= '\0'; i++){
            tamanho++; // [1]
         }

            for(i = 1; i<tamanho; i++){ // [2], [3]
                atual = caminho[i-1];
                proximo = caminho [i];

                if(atual == 'A' && proximo == 'A'){
                    dist_tot += dist[0];
                }if(atual == 'A' && proximo == 'B'){
                    controle = 1; 
                }if(atual == 'A' && proximo == 'C'){
                    dist_tot += dist[2];
                }if(atual == 'A' && proximo == 'D'){
                    controle = 1; 
                }if(atual == 'A' && proximo == 'E'){
                    dist_tot += dist[4];
                }if(atual == 'B' && proximo == 'A'){
                    controle = 1; 
                }if(atual == 'B' && proximo == 'B'){
                    dist_tot += dist[6];
                }if(atual == 'B' && proximo == 'C'){
                    controle = 1; 
                }if(atual == 'B' && proximo == 'D'){
                    dist_tot += dist[8];
                }if(atual == 'B' && proximo == 'E'){
                    controle = 1;
                }if(atual == 'C' && proximo == 'A'){
                    controle = 1; 
                }if(atual == 'C' && proximo == 'B'){
                    dist_tot += dist[11];
                }if(atual == 'C' && proximo == 'C'){
                    dist_tot += dist[12];
                }if(atual == 'C' && proximo == 'D'){
                    controle = 1; 
                }if(atual == 'C' && proximo == 'E'){
                    controle = 1;
                }if(atual == 'D' && proximo == 'A'){
                    controle = 1; 
                }if(atual == 'D' && proximo == 'B'){
                    controle = 1; 
                }if(atual == 'D' && proximo == 'C'){
                    controle = 1; 
                }if(atual == 'D' && proximo == 'D'){
                    dist_tot += dist[18]; 
                }if(atual == 'D' && proximo == 'E'){
                    dist_tot += dist[19];
                }if(atual == 'E' && proximo == 'A'){
                    dist_tot += dist[20];
                }if(atual == 'E' && proximo == 'B'){
                    dist_tot += dist[21];
                }if(atual == 'E' && proximo == 'C'){
                    controle = 1; 
                }if(atual == 'E' && proximo == 'D'){
                    controle = 1; 
                }if(atual == 'E' && proximo == 'E'){
                    dist_tot += dist[24];
                }
                if(controle == 1){
                    break;
                }
            
            }
            if(controle == 1){
                printf("Caminho invalido\n");
            }else{
                printf("Custo: %d\n", dist_tot);
            }
    }

    return 0;
}

// [1] A variável `tamanho` não é zerada a cada nova linha lida.
// [2] A estrutura só trata cidades de A a E manualmente, sem generalização para qualquer tamanho. 
// [3] Nenhum tratamento para letras fora de A–E. 
