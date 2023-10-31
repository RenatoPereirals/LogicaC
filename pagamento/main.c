#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}
int main()
{
    double valor, hora, total;
    char nome[50];

    printf("nome: ");
    ler_texto(nome, 50);


    printf("Valor da hora: ");
    scanf("%lf", &valor);

    printf("Horas trabalhadas: ");
    scanf("%lf", &hora);


    total = valor * hora;



    printf("O pagamento para %s deve ser %.2lf", nome, total);


    return 0;
}
