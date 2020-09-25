#include <stdio.h>

int main(){
    
    float otavio, bruno, ian, menor = 0;
    
    scanf("%f %f %f", &otavio, &bruno, &ian);
    
    if(otavio == bruno || otavio == ian || bruno == ian){
        
        printf("Empate\n");
        
    }
    
    else{
        
        if(otavio < bruno && otavio < ian){
            
            printf("Otavio\n");
        }
        
        else if(bruno < otavio && bruno < ian){
            
            printf("Bruno\n");
            
        }
        
        else{
            
            printf("Ian\n");
        }
    }
    

    return 0;
}

