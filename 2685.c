#include <stdio.h>

int main(){
    
    int grau;
    
    while(scanf("%d", &grau) != EOF){
        
        if(grau == 360){
            
            printf("Bom Dia!!\n");
        }
        
        else if(grau >= 0 && grau < 90){
            
            printf("Bom Dia!!\n");
        }
        
        else if(grau >= 90 && grau < 180){
            
            printf("Boa Tarde!!\n");
        }
        
        else if(grau >= 180 && grau < 270){
            
            printf("Boa Noite!!\n");
        }
        
        else{
            
            printf("De Madrugada!!\n");
        }
    }

    return 0;
}

