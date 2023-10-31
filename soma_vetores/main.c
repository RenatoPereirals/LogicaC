#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Quantos valores cai ter cada vetor? ");
    scanf("%d",&n);

    double A[n], B[n], C[n];

    printf("Digite os valores do vetor A: \n");
    for (int  i=0;i<n;i++){
        scanf("%lf", &A[i]);
    }

    printf("Digite os valores do vetor B: \n");
    for (int  i=0;i<n;i++){
        scanf("%lf", &B[i]);
    }

    printf("VETOR RESULTENTE: \n");
    for (int i=0;i<n;i++){
        C[i] = A[i] + B[i];
        printf("%.1lf\n", C[i]);
    }

    return 0;
}
