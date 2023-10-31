#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, area, areaQ, areaT;

    printf("Digite a medida de A: ");
    scanf("%lf", &a);

    printf("Digite a medida de B: ");
    scanf("%lf", &b);

    printf("Digite a medida de C: ");
    scanf("%lf", &c);

    areaQ = pow(a,2);
    areaT = a * b / 2;
    area = (a + b) * c / 2;


    printf("AREA DO QUADRADO = %.4lf\n", areaQ);
    printf("AREA DO TRIANGULO = %.4lf\n", areaT);
    printf("AREA DO TRAPEZIO = %.4lf\n", area);

    return 0;
}
