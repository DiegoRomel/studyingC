#include <stdio.h>
#include <stdlib.h>

/*
write a program that receives seconds and turns it to HH:MM:SS
4000 seconds -> 1:6:40
*/

int main()
{
    int seconds, hours, minutes, remainingSeconds;
    printf("total of seconds: \n");
    scanf("%d", &seconds);

    hours = seconds / 3600; //3600 -> seconds in a hour
    remainingSeconds = seconds % 3600;
    minutes = remainingSeconds / 60;
    remainingSeconds %= 60;

    printf("%.2d:%.2d:%.2d\n", hours, minutes, remainingSeconds);

    return 0;
}
