#include <stdio.h>

int main(){
    
    int i, n;
    float x, y, div = 1;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        
        scanf("%f %f", &x, &y);
        
        if(y == 0){
            
            printf("divisao impossivel\n");
            
        }
        
        else{
            
            div = x / y;
            
            printf("%.1f\n", div);
        }
        
        div = 1;
    }

    return 0;
}

