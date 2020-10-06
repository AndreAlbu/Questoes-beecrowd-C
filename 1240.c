#include <stdio.h>

int main() {
   int n, a, b, v1[1000000], v2[1000000], cont, j, i, x;
   
   scanf("%d", &n);
   
   for(i = 0; i < n; i++) {
      cont = 0;
      x = 0;
      scanf("%d %d", &a, &b);

      while(b > 0) {
         v1[cont] = b % 10;
         v2[cont] = a % 10;
         a = a / 10;
         b = b / 10;
         cont++;
      }
      for(j = 0; j < cont; j++) {
         if(v1[j] == v2[j]) x++;
      }
      if(x == cont) printf("encaixa\n");
      else printf("nao encaixa\n");      
   }
   return 0;
}
