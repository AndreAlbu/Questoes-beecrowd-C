#include <stdio.h>

int main(){
    
    int lidasDia, adianta, paginasAdianta;
    
    int paginas = 0;
    
    while(1){
    
        scanf("%d %d %d", &lidasDia, &adianta, &paginasAdianta);
        
        if(lidasDia == 0){
            
            return 0;
        }
        
        paginas = lidasDia * adianta * paginasAdianta / (paginasAdianta - lidasDia);
        
        if(paginas == 1){
        
            printf("%d pagina\n", paginas);
        }
        
        else{
            
            printf("%d paginas\n", paginas);
        }
        
        
    }

    return 0;
}

