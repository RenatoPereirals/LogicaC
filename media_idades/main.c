#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont;
    double idade, soma, media;

    printf("digite as idades:\n");
    scanf("%lf", &idade);

    soma = 0;
    cont = 0;

    while (idade>=0){

       soma = soma + idade;
       cont = cont + 1;
       scanf("%lf", &idade);
    }

    media = soma / cont;

    if (cont = 0){
    printf("IMPOSSIVEL CALCULAR");
    }
    else{
       printf("MEDIA = %.2lf", media);
    }

    return 0;
}
