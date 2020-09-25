#include <stdio.h>

int main(){
    
    int i, x, tempo, velocidade, distancia = 0;
    
    scanf("%d", &x);
    
    for(i = 0; i < x; i++){
        
        scanf("%d %d", &tempo, &velocidade);
        
        distancia = distancia + (tempo * velocidade);
        
    }
    
    printf("%d\n", distancia);

    return 0;
}

