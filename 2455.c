#include <stdio.h>

int main(void) {

  int p1, p2, c1, c2, ladoEsquerdo, ladoDireito;

  scanf("%d %d %d %d", &p1, &c1, &p2, &c2);

  ladoEsquerdo = p1 * c1;

  ladoDireito = p2 * c2;

  if(ladoDireito == ladoEsquerdo){

    printf("0\n");

  }

  else if(ladoEsquerdo > ladoDireito){

    printf("-1\n");

  }

  else{

    printf("1\n");
  }

  return 0;
}
