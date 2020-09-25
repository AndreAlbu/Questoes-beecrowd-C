#include <stdio.h>

int main(){
    
    int i, x;
    
    scanf("%d", &x);
    
    for(i = 1; i <= x; i++){
        
        if(i < x){
        
            printf("Ho ");
        }
        
        else if(i == x){
            
            printf("Ho!", i);
        }
    }
    
    printf("\n");
        
   

    return 0;
}

