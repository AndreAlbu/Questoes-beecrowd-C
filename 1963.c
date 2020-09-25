#include <stdio.h>

int main(){
    
    float A, B, porcentagem = 0.0;
    
    scanf("%f %f", &A, &B);
    
    porcentagem = ((B * 100.00) / A) - 100.00;
    
    printf("%.2f%%\n", porcentagem);

    return 0;
}

