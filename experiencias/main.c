    #include <stdio.h>

    int main()
    {
        char tipo;
        int n, i, total, rato, coelho, sapo, totalGeral;
        double percRato, percCoelho, percSapo;

        printf("Quantos casos de teste serao realizados? ");
        scanf("%d",&n);

        rato = 0;
        coelho = 0;
        sapo = 0;

        for (int i=0;i<n;i++){
            printf("Qunatidade de cobaias: ");
            scanf("%d",&total);
            printf("tipo de cobaia: ");
            scanf("%s",&tipo);

            if (tipo=='R'){
                rato = total + rato;
            }
            if (tipo=='C'){
                coelho = total + coelho;
            }
            if (tipo=='S'){
                sapo = total + sapo;
            }
        }

        totalGeral = rato + coelho + sapo;
        percCoelho = ((double)coelho/totalGeral)*100;
        percRato = ((double)rato/totalGeral)*100;
        percSapo = ((double)sapo/totalGeral)*100;

        printf("\nRELATORIO FINAL:\n");
        printf("Total %d de cobaias\n", totalGeral);
        printf("Total de coelhos: %d\n",  coelho);
        printf("Total de ratos: %d\n", rato);
        printf("Total de sapos: %d\n", sapo);
        printf("Percentual de coelhos: %.2lf\n", percCoelho);
        printf("Percentual de ratos: %.2lf\n", percRato);
        printf("Percentual de sapos: %.2lf\n", percSapo);

        return 0;
    }
