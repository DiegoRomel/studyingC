#include <stdio.h>
#include <stdlib.h>

//extracting decimal part of a float value

int main()
{
    int counter = 1;

    do {
    float data, decimalPart;
    printf("Enter a floating value: \n");
    scanf("%f", &data);
    decimalPart = data - (int)data;
    printf("The integer part is: %d, and the decimal part is: %.2f\n",(int)data, decimalPart);
    printf("Press 1 to continue...\n");
    scanf("%d", &counter);

    } while (counter == 1);


    return 0;
}
