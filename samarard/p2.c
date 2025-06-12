#include <stdio.h>
 
int main() {
    int n, original, contrario = 0, resto;
    
    scanf("%d", &n);
    
    
    original = n;
    
    
    while (n != 0) {
        resto = n % 10;
        contrario = contrario * 10 + resto;
        n /= 10;
    }
    
    if (original == contrario) {
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }
    
    return 0;
}