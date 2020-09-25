#include <stdio.h>

int main(){
    
    int i, n, alturaArvore, diamentroArvore, quantidadeGalhos;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        
        scanf("%d %d %d", &alturaArvore, &diamentroArvore, &quantidadeGalhos);
        
        if(alturaArvore >= 200 && alturaArvore <= 300 && diamentroArvore >= 50 && quantidadeGalhos >= 150){
            
            printf("Sim\n");
        }
        
        else{
            
            printf("Nao\n");
        }
    }
    

    return 0;
}











