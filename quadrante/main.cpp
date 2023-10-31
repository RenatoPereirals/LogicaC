#include <iostream>

using namespace std;

int main()
{
   double x, y;

    printf("Digite os valores das coordenadas X e Y: \n");
    scanf("%lf", &x);
    scanf("%lf", &y);

    while (x !=0 && y !=0){
        if (x > 0 && y > 0){
            printf("QUADRANTE 1\n");
        }
        else if (x < 0 && y > 0){
            printf("QUADRANTE 2\n");
        }
        else if( x< 0 && y < 0){
            printf("QUADRANTE 3\n");
        }
        else if (x > 0 && y < 0){
            printf("QUADRANTE 4\n");
        }
    printf("Digite os valores das coordenadas X e Y: \n");
    scanf("%lf", &x);
    scanf("%lf", &y);
    }
    return 0;
}
