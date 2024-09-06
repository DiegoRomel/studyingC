#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// um programa que recebe os valores a, b e c e calcula na formula de bhaskara


int main()
{
    float bh, bh2, a, b, c, delta;
    printf("Enter a b and c...\n");
    scanf("%f%f%f", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;
    printf("O valor de delta eh %f\n", delta);

    if (delta  < 0) {
        printf("Nao existe raiz\n");
    } else if (delta == 0) {
    bh = (-b + sqrt(delta)) / (2 * a);
    printf("a unica raiz eh:%f",bh);
    }
    else {
        bh = (-b + sqrt(delta)) / (2 * a);
        bh2 = (-b - sqrt(delta)) / (2 * a);

        printf("the result is %f and %f\n", bh, bh2);
    }


    return 0;
}
