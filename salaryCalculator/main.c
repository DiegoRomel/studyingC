#include <stdio.h>
#include <stdlib.h>

/*How many money can you make in a period of time?
*/

int main()
{
    float dailyMoney;

    printf("How much money you make in one day?\n");
    scanf("%f", &dailyMoney);

    printf("You make a total of R$ %.2f in a week.\n", dailyMoney * 7);
    printf("You make a total of R$ %2.f in a month.\n", dailyMoney * 30);
    printf("You make a total of R$ %.2f in a year.\n", dailyMoney * 365);
    printf("You make a total of R$ %.2f in two years.\n", dailyMoney *730);
    return 0;
}
