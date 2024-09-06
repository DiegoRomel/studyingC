#include <stdio.h>

//converting seconds to hh:mm:ss
int main(void){
    int totalSeconds;
    int hours, minutes, seconds, aux;

    totalSeconds = 140153;

    hours = (float)totalSeconds / 3600.0;// 140153 / 3600 = 38
    printf("hours: %d\n", hours);
    minutes = (float)(totalSeconds % 3600) / 60; // 140153 % 3600 = 3353; 3353 / 60 = 55
    printf("minutes: %d\n", minutes);
    seconds = (totalSeconds % 3600) % 60; // 140153 % 3600 = 3353; 3353 % 60 = 53
    printf("seconds: %d\n", seconds);

    return 0;
}
