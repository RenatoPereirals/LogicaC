#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma, cont;
    double media;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vet[n];

    for (int i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    soma = 0;
    cont = 0;
    for (int i=0;i<n;i++){
        if(vet[i]%2==0){
            soma = soma + vet[i];
            cont++;
        }
    }
    if (cont == 0){
        printf("NENHUM NUMERO PAR!");
    }
    else{
        media = (double) soma / cont;
        printf("MEDIA DOS PARES: = %.1lf", media);
    }


    return 0;
}
