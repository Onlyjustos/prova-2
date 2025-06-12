#include <stdio.h>

int main () {

char texto[200];
scanf("%[^\n]%*c", texto);

char tse[200], tce;
int tamanho = 0;

while ( texto[tamanho] != '\0') { 
    if (texto[tamanho] == ' ') {
        tce++;
    } else {
        tse[200]= texto[tamanho]; 
    }
    tamanho++;
}

int tam = 0;
while ( texto[tam] != '\0') {
        tam++;
    }

int c = 0, f = tam - 1;
char troca;

while ( c < f ) {
    troca= texto[c];
texto[c] = texto[f];
texto[f] = troca;

c++;
f--;


}
if (troca == tse[200]) {
    printf("PALINDROMO\n");
} else {
    printf("NAO PALINDROMO\n");
}


    return 0;
    
}