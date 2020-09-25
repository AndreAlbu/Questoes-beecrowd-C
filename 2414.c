#include <stdio.h>

int main(){

    int i, num = 0, maior = 0;
    
    scanf("%d", &num);
    
    while(num != 0){

        if(num > maior){
            
            maior = num;
        }
        
        scanf("%d", &num);
        
    }
    
    printf("%d\n", maior);

    return 0;
}
