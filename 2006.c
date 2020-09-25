#include <stdio.h>

int main(){
    
    int i, tipo, cha[5], qtd = 0;
    
    scanf("%d", &tipo);
    
    for(i = 1; i <= 5; i++){
        
        scanf("%d", &cha[i]);
        
        if(cha[i] == tipo){
            
            qtd++;
        }
        
    }
    
    printf("%d\n", qtd);

    return 0;
}

