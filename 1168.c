#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

   int n, count;
   int i, j;
   char s[1110];

   scanf("%d", &n);
   for(i = 0; i < n; i++) {
      count = 0;
      scanf("%s", s);
      for(j = 0; j < strlen(s); j++) {
         if(s[j] == '1') count += 2;
         else if(s[j] == '2' || s[j] == '3' || s[j] == '5') count += 5;
         else if(s[j] == '4') count += 4;
         else if(s[j] == '6' || s[j] == '9' || s[j] == '0') count += 6;
         else if(s[j] == '7') count += 3;
         else if(s[j] == '8') count += 7;
      }
      printf("%d leds\n", count);
   }

    return 0;
}