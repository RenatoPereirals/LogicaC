#include <stdio.h>

int main()
{
    double comprimento, largura, preco, valor, area;

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);


    printf("Digite o largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o valor do terreno: ");
    scanf("%lf", &preco);


    area = comprimento * largura;
    valor = area * preco;


    printf("Area do terreno = ");
    printf("%.1lf\n", area);
    printf("Valor do terreno = ");
    printf("%.2lf", valor);

    return 0;
}
