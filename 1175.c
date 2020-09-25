#include <stdio.h>

int main(){ 
    
    int i, vetor1[20], vetor2[20], aux = 0;
    
    for(i = 0; i < 20; i++){
        
        scanf("%d", &vetor1[i]);
    }
    
    for(i = 0; i < 20; i++){
        
        aux = vetor1[i];
        vetor2[i] = vetor1[20-1-i];
        vetor2[20-1-i] = aux;
        
    }
    
    for(i = 0; i < 20; i++){
        
        printf("N[%d] = %d\n", i, vetor2[i]);
    }

    return 0;
}

