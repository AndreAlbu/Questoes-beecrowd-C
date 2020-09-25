#include <stdio.h>

int main(){
    
    int i, L = 0, maior = 0;
    
    while((scanf("%d", &L)) != EOF){
        
        int V[L];
        
        for(i = 0; i < L; i++){
            
            scanf("%d", &V[i]);
            
            if(V[i] > maior){
                
                maior = V[i];
            }
        }
        
        if(maior < 10){
            
            printf("1\n");
        }
        
        else if(maior >= 10 && maior < 20){
            
            printf("2\n");
        }
        
        else{
            
            printf("3\n");
        }
        
        maior = 0;
    }

    return 0;
}
