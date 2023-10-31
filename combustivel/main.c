#include <stdio.h>


int main()
{
    int x, cont1, cont2, cont3;

    printf("Informe um codigo (1, 2 3) ou 4 para parar: ");
    scanf("%d", &x);

    cont1 = 0;
    cont2 = 0;
    cont3 = 0;

    while (x != 4){
       if (x == 1){
          cont1 = cont1 + 1;
       }
       if (x == 2){
          cont2 = cont2 + 1;
       }if (x == 3){
          cont1 = cont3 + 3;
       }
       printf("Informe um codigo (1, 2 3) ou 4 para parar: ");
       scanf("%d", &x);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", cont1);
    printf("Gasolina: %d\n", cont2);
    printf("Disel: %d\n", cont3);

    return 0;
}
