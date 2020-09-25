#include <stdio.h>

int main(){
    
    int i, totalPessoas, cont = 0;
    
    scanf("%d", &totalPessoas);
    
    int lista[totalPessoas];
    
    for(i = 0; i < totalPessoas; i++){
        
        scanf("%d", &lista[i]);
        
        if(lista[i] == 1){
            
            cont += 1;
        }
    }
    
    printf("%d\n", cont);

    return 0;
}

