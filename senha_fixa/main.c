#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha, x;

    printf("Digite a senha: ");
    scanf("%d", &x);

    senha = 2002;

    while (senha != x){
        printf("Senha invalida! Tente novamente: ");
        scanf("%d", &x);
    }

    printf("Acesso permitido!");

    return 0;
}
