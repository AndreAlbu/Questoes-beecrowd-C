#include <stdio.h>

int main(){
    
    int i, x, y, soma = 0, treze;
    
    scanf("%d", &x);
    scanf("%d", &y);
    
    soma = 0;
    
    if(x < y){
        
        for(i = x; i <= y; i++){
            
            if(i % 13 != 0){
                
                soma = soma + i;
            }
        }
        
        printf("%d\n", soma);
        
        soma = 0;
    }
    
    else{
        
        for(i = y; i <= x; i++){
            
            if(i % 13 != 0){
                
                soma = soma + i;
            }
        }
        
        printf("%d\n", soma);
    }

    return 0;
}

