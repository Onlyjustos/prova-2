    #include <stdio.h>
    #include <stdlib.h>
    
    char frase[200];
    
    int main(){
    int i, j, comp, size, last;
        scanf("%[^\n]",frase);
        for (i=0;i<200;i++){
         if (frase[i] == ' ') {
          if (i!=199) {
          for (j=i+1;j<200;j++) {
            frase[j-1] = frase[j];
          }
          }
          else frase[i] = '\0';
         }
        }
        for (i=0;i<200;i++){
         if (frase[i] == '\0') {
         last = i-1; break;
         }
        }
        for (i=0;i<last/2;i++){
         comp = last - i;
         if (frase[i] != frase[comp] && !(frase[i] == ' ' || frase[comp] == ' ')) {printf("NAO PALINDROMO\n"); return 0;}
        }
        printf("PALINDROMO\n");
        return 0;
    }
