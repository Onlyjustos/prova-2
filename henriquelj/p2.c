#include<stdio.h>
#include<string.h>
 
int main(){
    char frase[500];
    fgets(frase, sizeof(frase), stdin);
    int i, tam;

    tam = strlen(frase);
    
    char nova_frase[500];
 
    if (frase[tam - 1] == '\n') {
        frase[tam - 1] = '\0';
        tam--;
    }
 
    for (i = 0; i < tam; i++){
        nova_frase[i] = frase[tam - 1 - i];
    }
 
    nova_frase[i] = '\0';

    int k, t = 0, u = 0; 
    char velho[500], novo[500];

    for (k = 0; k < tam; k++){
        if (nova_frase[k] != ' '){
            novo[t] = nova_frase[k];
            t++;
        }
    }
    int h;
    for (h = 0; h < tam; h++){
        if (frase[h] != ' '){
            velho[u] = frase[h];
            u++;
        }
    }

    int j, cont = 0;
    for (j = 0; j < u; j++){
        if (velho[j] == novo[j]){
            cont++;
        }
    }

    if (cont == j){
        printf("PALINDROMO \n");
    } else{
        printf("NAO PALINDROMO\n");
    }
    return 0;
}