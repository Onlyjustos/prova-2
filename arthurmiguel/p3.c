#include <stdio.h>
#define dim 100
int calcula_distancia(int mat[][21], char * p ){

    int i, x = 0, soma = 0, a ,b,z ;
    int vet[33];

    for (i = 0; p[i] != '\0'; i++) {
      
     if (p[i] == 'A') {
        vet[x] = 0;
         x++;
    } else if (p[i] == 'B') {
        vet[x] = 1;
         x++;
    }else if (p[i] == 'C') {
        vet[x] = 2;
         x++;
    }else if (p[i] == 'D') {
        vet[x] = 3;
         x++;
    } else if (p[i] == 'E') {
        vet[x] = 4;
         x++;
    }
}
  for  ( i = 0 ;i < x - 1; i++)
    { 
        a = vet[i];
        b = vet[i + 1];     
        z = mat[a][b];
        
        if ( mat[a][b]  ==  -1 )
        {
            return -1;
        }
          soma = soma + mat[a][b];
    } 
      return soma;


}
int main () {

  int n, i, j;

  scanf("%d" , &n);

  int mat[21][21];

   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
          scanf("%d" , &mat[i][j]);
      }
   }  

    int nn;

    scanf("%d" , &nn);
    getchar();
    
    char vet[35];
     
    for (i = 0; i < nn; i++) {
    
     scanf("%s" , vet);  
     int t = calcula_distancia(mat, vet);

     if (t == -1) {
        printf("Caminho invalido\n");
     } else {
        printf("Custo: %d\n" , t);
     }
    }
  return 0;
}