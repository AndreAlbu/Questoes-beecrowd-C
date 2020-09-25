#include <stdio.h>

int main(){
    
    int x;
    
    scanf("%d", &x);
    
    if(x == 0){
        
        printf("E\n");
    }
    
    else if(x >= 1 && x <= 35){
        
        printf("D\n");
    }
    
    else if(x >= 36 && x <= 60){
        
        printf("C\n");
    }
    
    else if(x >= 61 && x <= 85){
        
        printf("B\n");
    }
    
    else{
        
        printf("A\n");
    }
    
    
    return 0;
}

