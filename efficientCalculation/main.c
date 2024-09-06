#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*write a program that receives an integer "x" and print:
x^2
x^4
x^6
x^8
*/

int main()
{
    int num = 2, power = 2;
    for (int i = 0; i < 4; i++) {
    int result = pow(num, power);
    printf("result: %d\n", result);
    power += 2;
    }


    return 0;
}

void alternative() {
    int num, power;
    printf("Enter an integer number: \n");
    scanf("%d", &num);
    printf("Enter a power: \n");
    scanf("%d", &power);
    for (int i = 0; i)




    return 0;
}

