#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
#define MAX 200
 
 
 
int main()
{
    char *text;
    text = (char*)malloc(MAX * sizeof(char));
    
 
    // Lê linha inteira
    fgets(text, MAX*sizeof(char), stdin);
    char * temp = text;
    int r = 0;
    while(*temp != '\0') {
        r++;
        temp++;
    }
    //printf("%d", r);
    r-=2;
    
    int l = 0;
    while(l < r) {
        if (text[l] == ' ') {
            l++;
            continue;
        }
        if (text[r] == ' ') {
            r--;
            continue;
        }
 
        //printf("%c %c\n", text[l], text[r]);
        if (text[l] != text[r]) {
            printf("NAO PALINDROMO\n");
            return 0;
        }
        else {
            
            l++; r--;
            continue;
        }
    }
    printf("PALINDROMO\n");
    free(text);
 
    return 0;
}