#include <stdio.h>

int main(){
    
    int j, x[10];
    
    for(j = 0; j < 10; j++){
    
        scanf("%d", &x[j]);
        
        if(x[j] <= 0){
            
            x[j] = 1;
        }
    }
    
    for(j = 0; j < 10; j++){
        
        printf("X[%d] = %d\n", j, x[j]);
    }
    
    return 0;
}

