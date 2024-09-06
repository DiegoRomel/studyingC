#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    double *pY = &y;
    char *pZ = &z;

    printf("endereco x = %d, e valor x = %d\n", pX, *pX);
    printf("endereco y = %d, e valor y = %lf\n", pY, *pY);
    printf("endereco z = %d, e valor z = %c\n", pZ, *pZ);

    return 0;
}
