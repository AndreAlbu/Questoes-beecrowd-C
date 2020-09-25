#include <stdio.h>

void verificar(int x){
    
    int cout = 0, i = 1;
    
    while(i < x){
    
        if(x % i == 0){
                
            cout = cout + i;
        
        }
        
        i++;
        
    }
    
    if(cout == x){
        
        printf("%d eh perfeito\n", x);

    }
        
    else{
        
        printf("%d nao eh perfeito\n", x);
    
    }
    
    cout = 0;
    
}

int main(){
    
    int j, x, num;
    
    scanf("%d", &num);
    
    for(j = 0; j < num; j++){
    
        scanf("%d", &x);
        
        verificar(x);
    
    }
    
    return 0;
}

