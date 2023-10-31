#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf(" Primeiro valor: ");
    scanf("%d", &a);

    printf("Segundo valor: ");
    scanf("%d", &b);

    printf("Terceiro valor: ");
    scanf("%d", &c);

    if (a<b && a<c){
        printf("MENOR = %d", a);
    }
    else if (b<c){
        printf("MENOR = %d", b);
    }
    else{
        printf("MENOR = %d", c);
    }

    return 0;
}
