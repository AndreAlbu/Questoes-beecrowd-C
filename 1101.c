#include <stdio.h>

int main(){
    
    int i, N, M, soma = 0;
    
    
    scanf("%d %d", &M, &N);
    
    while(M != 0 && N != 0 && M > 0 && N > 0){
    
        soma = 0;
        
        if(M > N){
        
            for(i = N; i <= M; i++){
                
                printf("%d ", i);
                
                soma = soma + i;
                
            }
            
            printf("Sum=%d\n", soma);
            
            soma = 0;
        }
        
        else if(N > M){
            
            for(i = M; i <= N; i++){
                
                printf("%d ", i);
                
                soma = soma + i;
            }
            
            printf("Sum=%d\n", soma);
        }
        
        else{
            
            printf("%d Sum=%d\n", M, M);
        }
        
        scanf("%d %d", &M, &N);
    }
    

    return 0;
}
