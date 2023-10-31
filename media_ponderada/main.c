    #include <stdio.h>
    #include <stdlib.h>

    int main(){
        int n, i;
        double x, y, z, media;

        printf("Quantos casos voce vai digitar? ");
        scanf("%d",&n);

        for (int i=0;i<n;i++){

            printf("Digite tres numeros: \n");
            scanf("%lf %lf %lf", &x, &y, &z);

            media = (x * 2 + y * 3 + z * 5) / 10;

            printf("MEDIA = %.1lf\n", media);

        }
        return 0;
    }
