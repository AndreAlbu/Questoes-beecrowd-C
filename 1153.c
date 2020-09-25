#include <stdio.h>

int main(){
    
    int i, n, fat = 1;
    
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        
        fat = fat * i;
    }
    
    printf("%d\n", fat);

    return 0;
}
