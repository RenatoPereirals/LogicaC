#include <stdio.h>
#include <stdlib.h>

int main()
{
    double taxa;

    printf("Digite a medidada da glicose: ");
    scanf("%lf", &taxa);

    if (taxa<100){
        printf("Classificacao: normal");
    }
   else if (taxa<=140){
        printf("Classificacao: elevado");
   }
   else{
    printf("Classificacao: diabetes");
   }

    return 0;
}
