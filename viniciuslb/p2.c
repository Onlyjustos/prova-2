#include <stdio.h>
#include <stdlib.h>



int comparar_string(const char * a, const int size){
    int i, j;
    char *sem_esp, *espelhado;
    sem_esp = malloc(size * sizeof(char));
    espelhado = malloc(size * sizeof(char));

    for(i = 0; i < size; i++){
        if(a[i] != ' ') sem_esp[i] = a[i]; // [1]
        else if(a[i] == ' ' && a[i+1] == ' ') sem_esp[i] = ' '; 
        else continue; 

    }
    for(i = 0, j = size - 1; i < size; j--, i++){
        espelhado[i] = sem_esp[j];
    }
    
    free(sem_esp);
    free(espelhado);
    return 1; // [2]

}

int main(){

    char str[201];
    int caracteres = 0, i = 0;

    while(scanf("%c", &str[i]) != EOF){    
    caracteres++;
    i++;
    }
    int resultado = comparar_string(str, caracteres);

    if(resultado){printf("PALINDROMO\n");}
    else printf("NAO PALINDROMO\n");

    return 0;

    // [1] Grave: Indice errado ao preencher sem_esp
    // [2] Grave: Não compara se é palíndromo, a função sempre retorna 1
}
