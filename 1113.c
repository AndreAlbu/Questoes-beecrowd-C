#include <stdio.h>

int main(){
    
    int x, y;
    
    while(scanf("%d %d", &x, &y) != EOF){
        
        if(x > y){
            
            printf("Decrescente\n");
        }
        
        else if(x < y){
            
            printf("Crescente\n");
        }
        
    }

    return 0;
}

