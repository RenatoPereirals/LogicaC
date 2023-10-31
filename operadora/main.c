#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tempo, soma;

    printf("Digite a quantidade de minutos: ");
    scanf("%lf", &tempo);

    if (tempo>100){
        soma = 50 + (tempo-100) * 2;
    }
   else{
    soma = 50;
   }
   printf("Valor a pagar = R$%.2lf", soma);

    return 0;
}
