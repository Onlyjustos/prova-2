#include <stdio.h>

#define TAM 20

int main(){

    char string[TAM+1];

    char aux[TAM+1];

    int a, b, c;

    int cont, cont2;

    int pali = 0;

    scanf("%[^\n]%*c", string);

    cont = 0;

    for(a = 0; string[a]!= '\0'; a++){
        cont++;
    }

    printf("%d", cont);

    // cont2 = 0;

    
    // for(b=cont; b >= 0; b--){
    //      printf ("%c", string[b]);

    //      printf ("%c", string[cont2]);
    //      cont2++;

    //     if(string[cont2] == string[b]){
    //         pali = 1;
    //     }else{
    //         pali = 0;
    //     }
    //     cont2++;
    // }

    // if(pali == 1){
    //     printf("ok");
    // } else{
    //      printf("nao");
    // }



    



    return 0;
}