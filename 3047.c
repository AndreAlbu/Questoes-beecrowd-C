#include <stdio.h>

int main(){
    
    int m, a, b, totalIdadeFilho = 0, outroFilho = 0, aux = 0;
    
    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &b);
    
    totalIdadeFilho = a + b;
    
    outroFilho = m - totalIdadeFilho;
    
    if(a > b){
        
        aux = a;
    }
    
    else{
        
        aux = b;
    }
    
    if(outroFilho > a && outroFilho > b){
        
        printf("%d\n", outroFilho);
    }
    
    else if(outroFilho < aux){
        
        printf("%d\n", aux);
    }
    
    else{
        
        printf("%d\n", outroFilho);
    }

    return 0;
}











