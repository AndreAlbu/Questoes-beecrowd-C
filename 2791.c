#include <stdio.h>

int main(){
    
    int i, x[4], aux = 0;
    
    for(i = 1; i <= 4; i++){
        
        scanf("%d", &x[i]);
        
        if(x[i] == 1){
            
            aux = i;
        }
    
    }
    
    printf("%d\n", aux);
    
    aux = 0;
    
    return 0;
}

