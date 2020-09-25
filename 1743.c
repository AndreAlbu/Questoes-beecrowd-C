#include <stdio.h>

int main (){

    int i,j, veri = 0;
    int matrizA[5];
    int matrizB[5];

    for(i=0;i<5;i++){
        
        scanf("%d",&matrizA[i]);
    }
    
    for(i=0;i<5;i++){
        
        scanf("%d",&matrizB[i]);
    }

    for(i=0;i<5;i++){
        
        if(matrizA[i] == matrizB[i]){
            
            veri = 0;
            break;
            
        }
        
        else{
            
            veri = 1;
            
        }

    }
    
    if(veri == 1){
        
        printf("Y\n");
        
    }else{
        
        printf("N\n");
    }

}