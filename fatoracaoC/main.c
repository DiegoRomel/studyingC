#include <stdio.h>
#include <stdlib.h>

// fatorial de um numero


int main()
{
    int i, num;
    printf("Insira um valor...\n");
    scanf("%d", &num);
    i = num;
    for (; i > 1; i--) {
        num = num * (i - 1);
    }

    printf("fatorial eh %d\n", num);

    return 0;
}
