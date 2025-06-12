#include <stdio.h>
#include <stdlib.h>

int main(){
    char txt[10000];
    int n,i,j,k,s,z,last,o,custo,ii,jj,f;
    f = 0;
    scanf("%d",&n);
    int** M = (int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++){
        M[i] = (int*)malloc(n*sizeof(int));
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&M[i][j]);
        }
    }
    scanf("%d",&k);
    for(s=0;s<k;s++){
        custo = 0;
        f = 0;
        scanf("%s%*c",txt);
        for(z=0;txt[z]!='\0';z++){}
        last = z;
        for(i=0;i<last;i++){
            if(txt[i]=='A')
                txt[i] = 0;
            else if(txt[i]=='B')
                txt[i] = 1;
            else if(txt[i]=='C')
                txt[i] = 2;
            else if(txt[i]=='D')
                txt[i] = 3;
            else if(txt[i]=='E')
                txt[i] = 4;
            else if(txt[i]=='F')
                txt[i] = 5;
            else if(txt[i]=='G')
                txt[i] = 6;
            else if(txt[i]=='H')
                txt[i] = 7;
            else if(txt[i]=='I')
                txt[i] = 8;
            else if(txt[i]=='J')
                txt[i] = 9;
            else if(txt[i]=='K')
                txt[i] = 10;
            else if(txt[i]=='L')
                txt[i] = 11;
            else if(txt[i]=='M')
                txt[i] = 12;
            else if(txt[i]=='N')
                txt[i] = 13;
            else if(txt[i]=='O')
                txt[i] = 14;
            else if(txt[i]=='P')
                txt[i] = 15;
            else if(txt[i]=='Q')
                txt[i] = 16;
            else if(txt[i]=='R')
                txt[i] = 17;
            else if(txt[i]=='S')
                txt[i] = 18;
            else if(txt[i]=='T')
                txt[i] = 19;
            else if(txt[i]=='U')
                txt[i] = 20;
            else if(txt[i]=='V')
                txt[i] = 21;
            else if(txt[i]=='W')
                txt[i] = 22;
            else if(txt[i]=='X')
                txt[i] = 23;
            else if(txt[i]=='Y')
                txt[i] = 24;
            else if(txt[i]=='Z')
                txt[i] = 25;
        }
        for(o=0;o<last-1;o++){
            ii = txt[o];
            jj = txt[o+1];
            if(M[ii][jj]!=-1){
                custo = custo + M[ii][jj];
            }
            else {
                printf("Caminho invalido\n");
                f = 1;
                break;
            }
        }
        if(f!=1){
           printf("Custo: %d\n",custo);
        }
         if(s==k){
            break;
        }
    }
    return 0;
}