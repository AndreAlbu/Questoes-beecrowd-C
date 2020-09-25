#include <stdio.h>

int main()
{
    int A1, A2, A3, menorTempo;

    scanf("%d %d %d", &A1, &A2, &A3);

    int tempoPrimeiroAndar = 2 * A2 + 4 * A3;
    int tempoSegundoAndar = 2 * (A1 + A3);
    int tempoTerceiroAndar = 4 * A1 + 2 * A2;

    menorTempo = tempoPrimeiroAndar;

    if (tempoSegundoAndar < menorTempo)
        menorTempo = tempoSegundoAndar;
    if (tempoTerceiroAndar < menorTempo)
        menorTempo = tempoTerceiroAndar;

    printf("%d\n", menorTempo);

    return 0;
}