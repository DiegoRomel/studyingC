#include <stdio.h>
#include <stdlib.h>


float convertToSeconds(float h, float m, float s);

int main()
{
    float hours, minutes, seconds, totalSeconds;

    printf("Enter the hours, minutes and seconds\n");
    scanf("%f%f%f", &hours, &minutes, &seconds);
    totalSeconds = convertToSeconds(hours, minutes, seconds);
    printf("The total of seconds is: %.2f\n", totalSeconds);

    return 0;
}


float convertToSeconds(float hour, float minute, float second) {
    float totalSeconds = second + (minute * 60) + (hour * 3600);

    return totalSeconds;
}
