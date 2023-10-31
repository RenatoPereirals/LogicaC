#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cont;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for (int i=0;i<n;i++){
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }

    cont = 0;
    printf("\nNUMEROS PARES:\n");

    for (int i=0;i<n;i++){
        if (vet[i] % 2 == 0){
            printf("%d ",vet[i]);
            cont++;
        }
    }
    printf("\nQUANTIDADE DE PARES = %d", cont);
    return 0;
}
