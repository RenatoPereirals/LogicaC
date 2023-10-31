#include <stdio.h>
#include <math.h>

int main()
{
    int n, linha, coluna;
    double soma;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    double mat[n][n];

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    soma = 0;

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (mat[i][j]> 0 ){
                soma = soma + mat[i][j];
            }
        }
    }

    printf("\nSOMA DOS POSITIVOS: %.1lf\n\n", soma);

        printf("Escolha uma linha: ");
        scanf("%d", &linha);

    printf("LINHA ESCOLHIDA: ");

    for (int j=0;j<n;j++){
        printf("%.1lf ", mat[linha][j]);
    }

        printf("\n\nEscolha uma coluna: ");
        scanf("%d", &coluna);

    printf("COLUNA ESCOLHIDA: ");

    for (int i=0;i<n;i++){
        printf("%.1lf ", mat[i][coluna]);
    }

        printf("\n\nDIAGONAL PRINCIPAL: ");

    for (int i=0;i<n;i++){
        printf("%.1lf ", mat[i][i]);
    }

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (mat[i][j]<0){
                mat[i][j] = pow(mat[i][j], 2);
            }
        }
    }

        printf("\n\nMATRIZ ALTERADA:\n");

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
                printf("%.1lf ", mat[i][j]);
        }
    printf("\n");
    }

    return 0;
}
