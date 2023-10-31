#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;

    printf("Qual a quantidade de linha da matirz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    double mat[m][n];
    double vet[m];

    for(int i=0;i<m;i++){
        printf("Digite os elementos da %da linha:\n", i+1);

        for (int j= 0;j<n;j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    for (int i=0;i<m;i++){
        vet[i] = 0;
        for(int j=0;j<n;j++){
            vet[i] = vet[i] + mat[i][j];
        }
    }
    printf("VETOR GERADO: \n");
    for (int i=0;i<m;i++){
        printf("%.1lf\n", vet[i]);
    }
    return 0;
}
