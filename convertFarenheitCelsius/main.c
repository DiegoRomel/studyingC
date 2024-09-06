#include <stdio.h>
#include <stdlib.h>

double convertFarenInCel(double farenheit) {
    double celsius = 5.0 / 9.0 * (farenheit - 32.0);
    return celsius;
}

double convertCelInFaren(double celsius) {
    double farenheit = celsius * 1.8 + 32;
    return farenheit;
}

int main() {
    double farenheit, celsius;
    int decision;
    printf("Temperature Converter!!!\n1 - farenheit to celsius\n2-celsius to farenheit\n");
    scanf("%d", &decision);
    if (decision == 1) {
    printf("Temperature in farenheit: ");
    scanf("%lf", &farenheit);
    celsius = convertFarenInCel(farenheit);
    printf("The temperature in celsius is: %.3lf\n", celsius);
    } else if (decision == 2) {
        printf("Temperature in celsius: ");
        scanf("%lf", &celsius);
        farenheit = convertCelInFaren(celsius);
        printf("The temperature in farenheit is: %.3lf\n", farenheit);
    }



    return 0;
}
