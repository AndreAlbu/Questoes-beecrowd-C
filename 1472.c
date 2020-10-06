#include <stdio.h>

int buscaBinaria(int *A, int n, int x) {
   int p = 1, r = n, q;
   while(p <= r) {
      q = (p+r)/2; 
      if(A[q] == x) {
         return q;
      }
      else if(A[q] > x) {
         r = q-1;
      }
      else if(A[q] < x) {
         p = q+1;
      }
   }
   return -1;
}

int main() {
   int n, x, soma, cont, vet[100000], i;
   
   while(scanf("%d", &n) != EOF){

      soma = 0;
      cont = 0;
      for(i = 0; i < n; i++) scanf("%d", &vet[i]);
      for(i = 0; i < n; i++) {
         soma = soma + vet[i];
         vet[i] = soma;
      }
         
      if(soma % 3 == 0) {
         soma = soma/3;
         for(i = 0; i < n; i++) {
            if(buscaBinaria(vet, n, vet[i] + soma) != -1) {
               if(buscaBinaria(vet, n, vet[i] + soma * 2) != -1) {
                  cont++;
               }
            }
         }
      }
      printf("%d\n", cont);

   }
   return 0;
}
