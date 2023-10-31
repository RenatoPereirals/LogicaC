#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
int main()
{
    double area, r, pi;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    pi = 3.14159;
    area = pi * pow(r,2);

    printf("AREA = %.3lf", area);

    return 0;
}
