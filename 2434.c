#include <stdio.h>

int main(){

    int i, N, S, menor = 0;
    
    scanf("%d %d", &N, &S);
    
    menor = S;
    
    while(N--){
        
        scanf("%d", &i);
        
        S = S + i;
        
        if(S < menor){
            
            menor = S;
        }
        
    }
    
    
    printf("%d\n", menor);
 
 
    return 0;
}
