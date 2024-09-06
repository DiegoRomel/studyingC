#include <stdio.h>
#include <math.h>


void square_numbers(int value)
{
    for (int i = 2; i <= value; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d^2 = %.0f\n", i, pow(i, 2));
        }
        
    }
}


int main(void)
{
    int number;
    scanf("%d", &number);
    if (number > 5 && number < 2000)
    {
        square_numbers(number);
    }

    return 0;
}