#include <stdio.h>

int main(){

    int C, P, F;
    
    scanf("%d %d %d", &C, &P, &F);
    
    
    if((C*F) > P){
        
        printf("N\n");
    }
    
    else{
        
        printf("S\n");
    }


    return 0;
}