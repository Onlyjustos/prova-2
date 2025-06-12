#include <stdio.h>
#define max 200
int main(){
    int i;
    char frase[max];
    char comp[max];
    int f;
     int cont = 0;
scanf("%[^\n]", frase);
comp[max]=frase[max]; //[1]
for(i=0;frase[i]!='\0'; i++){
   cont++;
}
for(i=0;frase[i]!='\0'; i++){//[2]
   cont--;
   if(frase[i]==comp[cont]){
    f=0;
   } else {
    f++;
   }
}

if(f>0){
printf("PALINDROMO\n");
} else{
    printf("NAO PALINDROMO \n");
}
    return 0;
}
//[1] Não é possivel atribuir strings dessa forma, e causa erro no programa inteiro
//[2] O programa nao desconsidera os espaços
