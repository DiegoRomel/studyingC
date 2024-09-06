#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("entre com dois valores diferentes para ordena-los:\n");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
        printf("%d %d\n", num2, num1);
    else
        printf("%d %d\n", num1, num2);

    return 0;
}