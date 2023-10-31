#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double hora, minuto, segundo, duracao;

    printf("Digite a duracao em segundos: ");
    scanf("%lf", &duracao);

    hora = (int) duracao / 3600;
    minuto = (int) duracao % 3600 / 60;
    segundo = (int) duracao % 3600 % 60;

    printf("%.0lf:%.0lf:%.0lf", hora , minuto, segundo);

    return 0;
}
