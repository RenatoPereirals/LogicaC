    #include <stdio.h>


    int main()
    {
        int n, i, fator;

        printf("Digite o valor de N: ");
        scanf("%d",&n);

        fator = 1;

        for (i=1;i<=n;i++){
            fator = fator * i;
        }
        printf("FATORIAL = %d",fator);

        return 0;
    }
