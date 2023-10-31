#include <stdio.h>
void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int  quant;
    double preco, dinheiro, troco;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade do produto: ");
    scanf("%d", &quant);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - preco * quant;

    printf("TROCO = %.2lf", troco);

    return 0;
}
