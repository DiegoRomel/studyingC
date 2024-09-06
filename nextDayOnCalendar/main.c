#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
write a program that receives a day, month and a year.
The program should find and print the next day on the calendar.

-check if the year is leap.
-separate in 30 days' months and 31 days' months.
*/
 bool isLeapYear(int year);

int main()
{

    int year, month, day;

    printf("Enter the year, month and day: \n");
    scanf("%d%d%d", &year, &month, &day);

    //if the month is == 2, is needed to verify if it's a leap year:


     if (day == 31) {
         if (month == 12) {
                year += 1;
            day = 0;
            month = 1;}
         else {
            day =0;
            month += 1;
         }
     } else if (day == 30) {
     switch (month){
    case 1:
        day = 0;
        month += 1;
        break;
    case 3:
        day = 0;
        month += 1;
        break;
    case 5:
        day = 0;
        month += 1;
        break;
    case 7:
        day = 0;
        month += 1;
        break;
    case 8:
        day = 0;
        month += 1;
        break;
    case 10:
        day = 0;
        month += 1;
        break;
    default:
        printf("processing...\n");
     }
     }

    if (month == 2) {
        if (isLeapYear(year)) {
            if (day == 29) {
                day = 0;
                month += 1;
            }
            } else {
                if (day  == 28) {
                    day = 0;
                month += 1;

            }
        }
    }

     day += 1;

     if (month > 12) {
        month = 1;
        year += 1;
     }


    printf("The next day is: %d/%d/%d\n", day, month, year);

    return 0;
}




bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0 && year % 400 == 0) {
            return true;
        } else if (year % 100 != 0) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}

