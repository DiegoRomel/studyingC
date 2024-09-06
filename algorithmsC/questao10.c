#include <stdio.h>

int main(void)
{
    float fahrenheit, celcius;
    printf("entre com a temperatura em graus fahrenheit: \n");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) / 1.8;

    printf("a temperatura em graus celcius eh: %.2f.\n", celcius);

    return 0;
}