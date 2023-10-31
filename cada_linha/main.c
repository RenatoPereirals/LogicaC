#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maior;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("MAIOR ELEMENTO DE CADA LINHA:\n");



    for(int i=0;i<n;i++){
        maior = mat[0][0];
        for(int j=0;j<n;j++){
           if (mat[i][j]>maior){
                maior = mat[i][j];
           }
        }
    printf("%d\n", maior);
    }

    return 0;
}
