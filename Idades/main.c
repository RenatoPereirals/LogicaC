#include <stdio.h>


int main()
{
    int idade1,  idade2;
    double media;
    char nome1[50], nome2[50];

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%ld", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%ld", &idade2);

    media = (double)(idade1 + idade2) / 2;
    printf("A idade media de %s e %s e de %.1lf anos.", nome1, nome2, media);

    return 0;
}
