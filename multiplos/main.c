#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y;
    printf("Dgite dois numeros inteiros: \n");
    scanf("%d\n", &X);
    scanf("%d", &Y);

    if (X%Y == 0 || Y%X == 0){
        printf("Sao multiplos");
    }
    else{
        printf("Nao sao multiplos");
    }

    return 0;
}
