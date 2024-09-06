#include <stdio.h>

int a = 0;


void incrementar(void)
{
    int b = 0;

    a++;
    b++;

    printf("a: %d, b: %d\n", a, b);
}


int main(void)
{
    for(int i = 0; i < 5; i++)
    {
        incrementar();
    }

    return 0;
}