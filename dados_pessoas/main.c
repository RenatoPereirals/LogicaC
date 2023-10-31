    #include <stdio.h>

    int main()
    {
        int n, cont;
        double maiorAltura, menorAltura, soma, media;

        printf("Quantas pessoas serao digitadas? ");
        scanf("%d", &n);

        char genero[n];
        double altura[n];

        for (int i=0;i<n;i++){
            printf("Altura da %da pessoa: ", i+1);
            scanf("%lf", &altura[i]);
            printf("Genero da %da pessoa: ", i+1);
            scanf("%s", &genero[i]);
        }

        menorAltura = altura[0];
        maiorAltura = altura[0];

        for (int i=1;i<n;i++){
            if(altura[i]<menorAltura){
                menorAltura = altura[i];
            }
            if (altura[i]>maiorAltura){
                maiorAltura = altura[i];
            }
        }

        cont = 0;
        soma = 0;

        for(int i=0;i<n;i++){
            if(genero[i] == 'F'){
                 soma = soma + altura[i];
                 cont++;
            }
        }
        media = (double)soma / cont;

        printf( "Menor altura: %.2lf\n", menorAltura);
        printf("Maior altura: %.2lf\n", maiorAltura);
        printf("Media das alturas das mulheres = %.2lf\n", media);
        printf("Numero de homens = %d", n-cont);

        return 0;
    }
