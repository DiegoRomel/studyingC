#include <stdio.h>

// a program to count by 2 to 1000


int main()
{
    int i;

    for (i = 2; i <= 1000; i += 2) {
        printf("\033[32m%d\n\033[m", i);
    }
    printf("\033[1;34;47mFinishing process...\033[m");

    return 0;
}

