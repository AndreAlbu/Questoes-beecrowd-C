#include <stdio.h>

int main(){
    
    int i = 0;
    float media, nota, aux;
    
    while(i < 2){
        
        scanf("%f", &nota);
        
        if((nota < 0) || (nota > 10)){
            
            printf("nota invalida\n");
            
        }
        
        else{
            
            i++;
            
            if(i == 1){
                
                aux = nota;
            }
            
            else{
                
                nota = nota;
            }
            
            
        }

    }
    
    media = ((aux + nota) / 2);
    
    printf("media = %.2f\n", media);
    

    return 0;
}
