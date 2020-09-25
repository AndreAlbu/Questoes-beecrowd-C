#include <stdio.h>

int main(){
    
    int curupira, boitata, boto, mapinguari, iara, soma = 0;
    
    scanf("%d", &curupira);
    scanf("%d", &boitata);
    scanf("%d", &boto);
    scanf("%d", &mapinguari);
    scanf("%d", &iara);
    
    curupira    = curupira   * 300;
    boitata     = boitata    * 1500;
    boto        = boto       * 600;
    mapinguari  = mapinguari * 1000;
    iara        = iara       * 150;
    
    soma = curupira + boitata + boto + mapinguari + iara + 225;
    
    printf("%d\n", soma);

    return 0;
}

