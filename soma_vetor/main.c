    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int n;
        double  soma, media;

        printf("Quantos numeros voce vai digitar? ");
        scanf("%d",&n);

        double vet[n];

        soma = 0;

        for (int i=0;i<n;i++){

            printf("Digite um numero: ");
            scanf("%lf", &vet[i]);

            soma = soma + vet[i];
        }

        media = (double) soma / n;

        printf("\nValores = ");

        for(int i=0;i<n;i++){

            printf("%.2lf ",vet[i]);
        }
        printf("\nSOMA = %.2lf\n", soma);
        printf("MEDIA = %.2lf",media);


        return 0;
    }
