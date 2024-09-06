#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("insira dois valora nao iguais: \n");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
        printf("o primeiro valor eh maior que o segundo\n");
    else
        printf("o segundo valor eh maior que o primeiro\n");

        return 0;
}