#include<stdio.h>

int main(){
    
    int i, j, maior = 0, valor[100];
    
    
    for(i = 0; i < 100; i++){
        
        scanf("%d", &valor[i]);
    }
    
    maior = valor[0];
    
    for(i = 0; i < 100; i++){
        
        if(valor[i] >= maior){
            
            maior = valor[i];
            
            j = i+1;
        }
    }
    
    printf("%d\n", maior);
    printf("%d\n", j);
    
    
    return 0;

