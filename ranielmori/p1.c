#include<stdio.h>
int main(){
    int j,i,K,M,g=0,modificada,normal,linhas,num,elementosdalinhas=1;
    int linear[100],triangular[100][100];//[1]
    char p=' ',triangular1[100][100];
    scanf("%d",&M);
   
    K=M*(M+1)/2;
  
        for ( i = 0; i < K; i++)
        { 
            scanf("%d",&linear[i]);
        }
        printf("ORIGINAL\n");
        for ( i = 0; i < M; i++)
        {
            for ( j = 0; j < M; j++)
            {
                if (i==j || i>j)
                {
                    triangular[i][j]=linear[g];
                    printf("%d ",triangular[i][j]);
                    g++;
                }else 
                   triangular[i][j]=p;
                   
               
            }
            printf("\n");
        }
            
         printf("MODIFICADA\n");
            for ( i = 0,g=0; i < M; i++)
            {
                for (  j= 0; j <M ; j++)
                {
                    if (i==j || i>j)
                    {
                        triangular[i][j]=5*linear[g];
                        printf("%d ",triangular[i][j]);
                        g++;

                    }else
                        triangular[i][j]=p;
                    
                 }
                 printf("\n");

        }
        printf("\n");
        
        

    return 0;
    
}
//[1]: Não usou alocação dinamica