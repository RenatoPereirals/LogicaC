#include <stdio.h>

int main(){
    int n, abaixo, entre, acima;
    double vtotalcompra, vtotalvenda, lucrototal;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &n);

    char nome[n][50];
    double pCompra[n], pVenda[n], pLucro[n];

    for (int i=0;i<n;i++){
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", &nome[i][0]);
        printf("Preco de compra: ");
        scanf("%lf", &pCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &pVenda[i]);

    }


    for (int i=0;i<n;i++){
         pLucro[i] = (pVenda[i] - pCompra[i]) / pCompra[i] * 100;
    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for (int i=0;i<n;i++){
        if (pLucro[i]<10){
            abaixo++;
        }
        else if (pLucro[i]<20){
            entre++;
        }
        else {
            acima++;
        }

    }

    vtotalcompra = 0;
    vtotalvenda = 0;

    for (int i=0;i<n;i++){
        vtotalcompra = vtotalcompra + pCompra[i];
        vtotalvenda = vtotalvenda + pVenda[i];
    }

    lucrototal = vtotalvenda - vtotalcompra;

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", abaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de cmpra: %.2lf\n", vtotalcompra);
    printf("Valor total de vendas: %.2lf\n", vtotalvenda);
    printf("Lucro total = %lf", lucrototal);


    return 0;
}
