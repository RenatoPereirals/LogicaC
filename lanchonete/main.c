#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, quant;
    double valor, total;

    printf("Condigo do produto comprado: ");
    scanf("%d", &cod);

    if (cod == 1){
        valor = 5,00;
    }
    else if (cod == 2){
        valor = 3.50;
    }
    else if (cod == 3){
        valor = 4.80;
    }
    else if (cod == 4){
        valor = 8.9;
    }
    else if (cod == 5){
        valor = 7.32;
    }

    printf("Quantidade comprada: ");
    scanf("%d", &quant);

    total = valor * quant;

    printf("Valor a pagar: R$ %.2lf", total);

    return 0;
}
