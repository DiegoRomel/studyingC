#include <stdio.h>

int main(void)
{
    int array[5] = {10, 20, 30, 50, 55};
    int *Parray = array;

    // mudando o quarto elemento...
    Parray += 3;
    *Parray = 5;

    printf("o quarto elemento agora eh: %d\n", array[3]);
    return 0;
}