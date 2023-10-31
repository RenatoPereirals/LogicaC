#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    double media, soma;

    printf("Quantos elementos vai ter o vetor: ");
    scanf("%d",&n);

    double vet[n];


    for(int i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    soma = 0;

    for (int i=0;i<n;i++){
        soma = soma + vet[i];
    }

    media = (double) soma / n;
    printf("\nMEDIA DO VETOR = %.3lf", media);
    printf("\nELEMENTOS ABAIXO DA MEDIA:\n");

    for (int i=0;i<n;i++){
        if(vet[i]<media){
            printf("%.1lf\n", vet[i]);
        }
    }

    return 0;
}
