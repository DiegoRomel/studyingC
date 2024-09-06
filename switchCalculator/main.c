#include <stdio.h>
#include <stdlib.h>

/*Create a calculator that receives 2 values and the operation from the user
using switch statements.
*/

int main()
{
    int num1, num2, result;
    char operation;


    printf("Enter the operator: \n");
    scanf("%c", &operation);
    printf("Enter two values: \n");
    scanf("%d%d", &num1, &num2);

    switch (operation) {
case '+':
    result = num1 + num2;
    break;
case '-':
    result = num1 - num2;
    break;
case '*':
    result = num1 * num2;
    break;
case '/':
    if (num2 != 0) {
    result = num1 / num2;
    } else {
        printf("You cannot divide by 0.\n");
    }
    break;
case '%':
    if (num2 != 0) {
    result = num1 % num2;
    } else {
        printf("You cannot divide by 0.\n");
    }
    break;
default:
    printf("Error...\n");
    break;
    }

    if ((operation == '/' || operation == '%') && num2 == 0) {
    printf("Try again...\n");
    } else {
    printf("The result is: %d\n", result);
    }

    return 0;
}
