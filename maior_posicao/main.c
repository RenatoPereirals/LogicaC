#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, maiorValor, maiorPosicao;
    int n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&n);

    double vet[n];

    for (int i=0;i<n;i++){
        printf("digite um numnero: ");
        scanf("%lf", &vet[i]);
    }

    maiorValor = vet[0];
    for (int i=0;i<n;i++){
        if (vet[i]>maiorValor){
            maiorValor = vet[i];
            maiorPosicao = i;
        }
    }
    printf("\nMAIOR VALOR = %.1lf\n", maiorValor);
    printf("POSICAO DO MAIOR NUMERO = %.1lf", maiorPosicao);


    return 0;
}
