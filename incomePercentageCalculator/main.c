#include <stdio.h>
#include <stdlib.h>

/*a program that calculates the amount of money with some percentage
working on a period of time*/

int repetir;


int main()
{
    do {
    printf("------------------------------------------------\n");
    float initialMoney, yearlyPercentage, totalIncome;
    int totalOfYears;
    printf("Enter your initial investment: \n");
    scanf("%f", &initialMoney);
    printf("Enter the percentage on your money per year: \n");
    scanf("%f", &yearlyPercentage);
    printf("Enter the period of time you keep your money yeld: \n");
    scanf("%d", &totalOfYears);

    totalIncome = initialMoney + (totalOfYears * yearlyPercentage / 100 * initialMoney);

    printf("The total of money you will have in %d years is: %.2f\n", totalOfYears, totalIncome);
    printf("Digite 1 para continuar ou outro valor para sair.\n");
    scanf("%d", &repetir);

    } while (repetir == 1);

    return 0;
}
