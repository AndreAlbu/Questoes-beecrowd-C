#include <stdio.h>

int main()
{

    int m,n,p,q,i,sub,soma;

    scanf("%d %d %d",&m,&n,&p);

    while (m!=0 && n!=0 && p != 0){
        soma = 0;
        sub = 0;
        for(i=0;i<p;i++){
            scanf("%d",&q);
            if(q>n){
                q = q%n; 

                if(q == 0){
                    soma += 1;
                }
                else{
                    sub =(n - q)+1;
                    soma += sub;
                }
            }
            else{
                sub =(n - q)+1;
                soma += sub;
            } 

        }

        printf("Lights: %d\n",soma);
        scanf("%d %d %d",&m,&n,&p);
    }


}
