#include <stdio.h>
#include <math.h>

int main()
{
    int d, vf, vg;

    float tf, tg;

    while (scanf("%d %d %d", &d, &vf, &vg) != EOF){

        tf = 12.0/vf;

        tg = sqrt(pow(d, 2) + 144)/vg;

        if (tg <= tf){
            printf("S\n");
        }else{
            printf("N\n");
        }
    }

    return 0;
}