#include <stdio.h>

int main ()
{
    int n, menores;
    double alturaTotal, alturaMedia, percMenores;

    printf("quantas pesoas serao digitadas? ");
    scanf("%d",&n);

    char nome[n][50];
    int idade[n];
    double altura[n];

    for (int i=0;i<n;i++){
            printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf",&altura[i]);
    }

    alturaTotal = 0;

    for (int i=0;i<n;i++){
        alturaTotal = alturaTotal + altura[i];
    }

    alturaMedia = alturaTotal / n;

    menores = 0;

    for (int i=0;i<n;i++){
        if (idade[i]<16){
            menores++;
        }
    }

    percMenores = (double) menores / n * 100;

    printf("\nAltura media: %.2lf\n", alturaMedia);
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percMenores);

    for (int i=0;i<n;i++){
        if (idade[i]<16){
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}
