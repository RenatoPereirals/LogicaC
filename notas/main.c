#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, soma;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    soma = nota1 +nota2;

    printf("NOTA FINAL = %.1lf\n", soma);

    if (soma < 60){
        printf("REPROVADO");
    }

    return 0;
}
