#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    soma = 0;

    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            soma = soma + mat[i][j];
        }
    }

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);

    return 0;
}
