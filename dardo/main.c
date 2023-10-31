#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a, b, c;

   printf("Digite as distancias: \n");
   scanf("%lf\n", &a);
   scanf("%lf\n", &b);
   scanf("%lf", &c);

   printf("MAIOR DISTANCIA: ");

   if (a > b && a > c){
        printf("%.2lf", a);
   }
  else if (b > c) {
        printf("%.2lf", b);
  }
  else{
        printf("%.2lf", c);
  }

    return 0;
}
