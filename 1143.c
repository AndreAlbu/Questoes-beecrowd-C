#include <stdio.h>

int main(){
    
    int i, num, quadrado, cubo;
    
    scanf("%d", &num);
    
    for(i = 1; i <= num; i++){
        
        quadrado = i * i;
        
        cubo = i * i * i;
        
        printf("%d %d %d\n", i, quadrado, cubo);
 
    }

    return 0;
}

