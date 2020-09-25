#include <stdio.h>

int main(){
    
    int i, n, bobo = 0, resto = 0;
    
    scanf("%d", &n);
    
    int resp = 1;
    
    scanf("%d", &bobo);
    
    for(i = 0; i < n-1; i++){
        
        scanf("%d", &resto);
        
        if(resto > bobo){
            
            resp = 0;
        }
        
    }
    
    if(resp == 1){
        
        printf("S\n");
    }
    
    else{
        
        printf("N\n");
        
    }

    return 0;
}
