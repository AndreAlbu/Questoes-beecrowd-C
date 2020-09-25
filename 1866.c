#include <stdio.h>

int main(){
    
    int i, x, num;
    
    scanf("%d", &x);
    
    for(i = 0; i < x; i++){
        
        scanf("%d", &num);
        
        if(num % 2 == 0){
        
            printf("0\n");
        }
        
        else{
            
            printf("1\n");
        }
        
    }

    return 0;
}

