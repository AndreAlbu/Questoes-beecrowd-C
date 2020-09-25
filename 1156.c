#include <stdio.h>

int main(){
    
    float i, S = 0.0, c = 1.0;
    
    for(i = 1; i <= 39; i = i + 2, c = c * 2){
        
        S = S + i / c ;
    }
    
    printf("%.2f\n", S);

    return 0;
}

