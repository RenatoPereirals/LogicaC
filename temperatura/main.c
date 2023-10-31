#include <stdio.h>
#include <string.h>


int main()
{
    char escala;
    double C, F;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if (escala == 'F'){
            printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &F);

            C = 5.0 / 9.0 * (F - 32.0);
            printf("Temperatura equivalente em Celsius: %.2lf\n", C);
    }
    else {
            printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &C);

            F = C * 9.0 / 5.0 + 32.0;
            printf("Temperatura equivalente em Fahrenheit: %.2lf", F);
    }

    return 0;
}
