#include <stdio.h>

int main()
{
    double dist, comb, media;

    printf("Distancia percorrida: ");
    scanf("%lf", &dist);

    printf("Combustivel gasto: ");
    scanf("%lf", &comb);

    media = dist / comb;

    printf("Consumo medio = %.3lf", media);

    return 0;
}
