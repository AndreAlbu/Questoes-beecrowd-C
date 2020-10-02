#include <stdio.h>

int main() {
    int p, n, c;
    while(scanf("%d %d %d", &p, &n, &c) != EOF && p != 0 && n != 0 && c != 0){
        int vetor[p], i;
        for(i = 0; i < p; i++) vetor[i] = 0;

        int j, entrada, count = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < p; j++){
                scanf("%d", &entrada);
                if(entrada == 1){
                    vetor[j]++;

                } else {
                    if(vetor[j] >= c){
                        count++;
                    }
                        vetor[j] = 0;
                }    
            }           
        } for (i = 0; i < p; i++){
            if(vetor[i] >= c){
                count++;
            }

        } printf("%d\n", count);
    }

    return 0;
}