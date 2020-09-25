#include <stdio.h>

int main(){
    
    int i, N;
    float v1, v2, v3, media = 0;
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        
        media = 0;
        
        scanf("%f %f %f", &v1, &v2, &v3);
        
        media = (( v1 * 2 + v2 * 3 + v3 * 5) / 10);
        
        printf("%.1f\n", media);
    }

    return 0;
}
