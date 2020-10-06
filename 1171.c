#include <stdio.h>

int main() {
   int n, vet[1000000], i, j,count;
   int  x[1000000];
   int tam;
   tam = sizeof(x) / sizeof(x[0]);
   for (i = 0; i < tam; i++) x[i] = -1;

   scanf("%d", &n);
   for (i = 0; i < n; i++) scanf("%d", &vet[i]);
   for (i = 0; i < n; i++) {
      count = 0;
      for (j = 0; j < n; j++) {
         if(vet[i] == vet[j]) {
            count++;
         }
      }
      x[vet[i]] = count;
   }
   
   for (i = 0; i < tam; i++) {
      if(x[i] != -1) printf("%d aparece %d vez(es)\n", i, x[i]);
   }
   
   return 0;
}

