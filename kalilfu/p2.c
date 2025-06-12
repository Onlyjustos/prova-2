#include <stdio.h>
 
int main(){
  int i=1, a=1, flag=0;
    char v[201], x;
    while (scanf("%c", &x)!=EOF){
      if (x>=97 && x<=122){
        v[i]=x;
        i++;
      }
    }
    i--;
    while ( v[i] == v[a]){
      if (i==1){
        flag++;
        break;
      }
      if (v[i]!=v[a]){
        break;
      }
      i--;
      a++;
    } 
    if (flag >= 1){
      printf("PALINDROMO\n");
    }
    else{
      printf("NAO PALINDROMO\n");
    }
    return 0;
}