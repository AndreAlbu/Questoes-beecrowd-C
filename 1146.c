#include <stdio.h>

int main(){
    
    int i, x;
    
    scanf("%d", &x);
    
    while(x != 0){
        
        for(i = 1; i <= x; i++){
            
            if(i < x){
            
                printf("%d ", i);
            }
            
            else if(i == x){
                
                printf("%d", i);
            }
        }
        
        printf("\n");
        
        scanf("%d", &x);
    }

    return 0;
}

