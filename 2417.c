#include<stdio.h>

int main(){
    
    int FV, FE, FS, CV, CE, CS;
    
    scanf("%d %d %d %d %d %d", &CV, &CE, &CS, &FV, &FE, &FS);
    
    int pontosC, pontosF;
    
    pontosC = ((CV * 3) + CE); 
    
    pontosF = ((FV * 3) + FE);
    
    if(pontosC > pontosF){
        
        printf("C\n");
        
    }else if(pontosC == pontosF && CS > FS){
        
        printf("C\n");
        
    }else if(pontosF > pontosC){
        
        printf("F\n");
        
    }else if(pontosF == pontosC && FS > CS){
        
        printf("F\n");
        
    }else if(pontosC == pontosF && FS == CS){
        
        printf("=\n");
    }
    
    
    return 0;
}