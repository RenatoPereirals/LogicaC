#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaI, horaF, total;

    printf("Hora inicial: ");
    scanf("%d", &horaI);
    printf("Hora final: ");
    scanf("%d", &horaF);

    if (horaI == horaF){
        total = 24;
    }
    else if (horaI < horaF){
        total = horaF -horaI;
    }
    else{
        total = horaF -horaI + 24;
    }
    printf("O JOGO DUROU: %d", total);
    return 0;
}
