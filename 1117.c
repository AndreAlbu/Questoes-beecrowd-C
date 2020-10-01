#include <stdio.h>

int main(){
    
    int i = 0;
    float media, nota, auxi;
    
    while(i < 2){
        
        scanf("%f", &nota);
        //verificando nota
        if((nota < 0) || (nota > 10)){
            //nao pode ser menor que zero nem maior que 10
            printf("nota invalida\n");
            
        }
        
        else{
            
            i++;
            
            if(i == 1){
                
                auxi = nota;
            }
            
            else{
                
                nota = nota;
            }
            
            
        }

    }
    
    media = ((auxi + nota) / 2); //criando media
    
    printf("media = %.2f\n", media);
    //exibe media

    return 0;
}
