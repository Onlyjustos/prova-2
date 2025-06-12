#include <stdio.h>

int main(){
    int cont = 0;
    int flag = 0;
    int dis = 0;
    int m[401][401] ;
    char caminhos[33] ;
    int n;
    int i,j;
    int tent = 0;
    scanf("%d",&n);
    for( i = 0; i < n ;i++){
        for(j = 0 ; j < n ; j++){
            scanf("%d", &m[i][j]);
        }
    }
    scanf("%d",&tent);
    while(tent--){
        scanf("%s", caminhos);
        for(i = 0 ; caminhos[i +1] != '\0'; i++){
            dis = m[caminhos[i] - 'A'][caminhos[i+1] - 'A'];
            if(dis == -1){
                flag = 1;
                break;
            }
            else{
                cont = cont + dis;
            }

        }
        if(flag){
            printf("Caminho invalido\n");
        }
        else{
            printf("Custo: %d\n",cont);
        }
        cont = 0;
        flag = 0;

    }

    return 0;
}