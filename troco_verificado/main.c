#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  quant;
    double preco, dinheiro, troco, total, falta;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Qunatidade comprada: ");
    scanf("%d", &quant);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    total = preco * quant;
    troco = dinheiro - total;
    falta = troco * (-1);
    if (dinheiro >= total){
        printf("TROCO = %.2lf", troco);
    }
    else{
        printf("DINHEIRO UNSUFICIENTE. FALTEM %.2lf REAIS", falta);
    }

    return 0;
}
