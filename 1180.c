#include <stdio.h>

int main(){
    
    int i, j = 0, n, menor = 0;
    
    scanf("%d", &n);
    
    int vetor[n];
    
    for(i = 0; i < n; i++){
        
        scanf("%d", &vetor[i]);
        
    }
    
    menor = vetor[0];
    
    for(i = 0; i < n; i++){
        
        if(vetor[i] < menor){
            
            menor = vetor[i];
            
            j = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", j);

    return 0;
}

