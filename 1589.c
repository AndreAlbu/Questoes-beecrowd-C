#include <stdio.h>

int main(){
    
    int i, raio = 0, t, r1, r2;
    
    scanf("%d", &t);
    
    for(i = 0; i < t; i++){
        
        scanf("%d %d", &r1, &r2);
        
        raio = r1 + r2;
        
        printf("%d\n", raio);
    }
    
    return 0;
}

