#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, i, dentro, fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    dentro = 0;
    fora = 0;

    for (int i=0;i<n;i++){
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x<10 || x >20){
            fora++;
        }
        else{
            dentro++;
        }
    }
    printf("%d DENTRO\n", dentro);
    printf("%d FORA", fora);

    return 0;
}
