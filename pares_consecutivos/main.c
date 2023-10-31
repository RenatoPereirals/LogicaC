#include <stdio.h>

int main()
{
    int x, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    soma = 0;

    while(x != 0){
        if (x % 2 == 0){
           soma = 5 * x + 20;

        }
        else{
           soma = 5 * x + 25;
        }
        printf("SOMA = %d\n", soma);
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
    }
    return 0;
}
