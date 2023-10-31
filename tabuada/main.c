#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, x;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for(int i=1; i <=10;i++){
        x =  n * i;
        printf("%d X %d = %d\n", n, i, x);
    }

    return 0;
}
