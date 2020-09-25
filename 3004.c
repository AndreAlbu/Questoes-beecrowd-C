#include <stdio.h>

int main(){
    
    int i, a, b, c, d, n;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        
        int aux = 0, aux1 = 0;
        
        scanf("%d %d %d %d", &a, &b, &c, &d);
        
        if(a > b){
            
            aux = a;
            a = b;
            b = aux;
        }
        
        if(c > d){
            
            aux1 = c;
            c = d;
            d = aux1;
        }
        
        
        if(a < c && b < d){
            
            printf("S\n");
        }
        
        else{
            
            printf("N\n");
        }
    }
    


    return 0;
}

