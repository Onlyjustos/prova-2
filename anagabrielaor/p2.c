 #include <stdio.h>
 //palidromo : sequencia de caracteres que possui a propriedade de oider ser
 //lida tabto da para a esquerda como da esquerda para a direita
 

 void transform(char *strF, char *strL, int tam);

 int main() {
    char first[200], mid[200], last[200];
    int i, j=0, tam, n=0;

    scanf("%[^\n]", first); //lê frase

    for (tam = 0; first[tam] != '\0'; tam++); //Descobre tamanho da string 1


    for(i = 0; i < tam; i++) { //verificar espaços           
        if (first[i] != ' ') {
            mid[j] = first[i];
            j++;
        }
        if (i == tam-1) mid[j] = '\0'; 
    }

    for (tam = 0; mid[tam] != '\0'; tam++); //Descobre tamanho da string 2

    transform(mid, last, tam); //transforma em texto sem espaço e inverte

    for (i = 0; i < tam; i++) { //enquanto i for menor que tamanho da string...
        if (mid[i] != last[i]) { //
            n++;
        }
    }
    
    if (n == 0) { // se as duas são igual
        printf("PALINDROMO\n");
    } else if (n > 0) { //se diferentes
        printf("NAO PALINDROMO\n");
    }
    return 0;
 }

//===============================

 void transform(char *strF, char *strL, int tam) {
    int i=0, j;
    char f, l, a;

    for (j = tam-1; j >= 0; j--) {
        strL[i] = strF[j];
        i++;
    }//[2]
    
 }
 //[1] i nunca é igual a tam, resolução : i == tam-1
 //[2] faltou o \0 no final da string last