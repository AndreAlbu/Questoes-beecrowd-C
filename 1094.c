#include <stdio.h>

int main(){
    
    int i, V, qtd = 0;
    
    char animal;
    
    float total = 0, totalSapo = 0, totalRato = 0, totalCoelho = 0; 
    
    float percentualCoelho = 0, percentualSapo = 0, percentualRato = 0;
    
    scanf("%d", &V);
    
    for(i = 0; i < V; i++){
        
        scanf("%d %c", &qtd, &animal);
        
        total = total + qtd;
        
        if(animal == 'C'){
            
            totalCoelho = totalCoelho + qtd;
        }
        
        else if(animal == 'R'){
            
            totalRato = totalRato + qtd;
        }
        
        else if(animal == 'S'){
            
            totalSapo = totalSapo + qtd;
        }
        
    }
    
    percentualCoelho = (totalCoelho  / total) * 100;
    percentualRato   = (totalRato   / total)  * 100;
    percentualSapo   = (totalSapo  / total)   * 100;
    
    printf("Total: %.f cobaias\n", total);
    printf("Total de coelhos: %.f\n", totalCoelho);
    printf("Total de ratos: %.f\n", totalRato);
    printf("Total de sapos: %.f\n", totalSapo);
    printf("Percentual de coelhos: %.2f %%\n", percentualCoelho);
    printf("Percentual de ratos: %.2f %%\n", percentualRato);
    printf("Percentual de sapos: %.2f %%\n", percentualSapo);

    return 0;
}
