#include <stdio.h>

int main(void)
{   
    void copy_values(int first_array[], int second_array[], int arrays_lenghts);
    void print_array(int array[], int array_length);
    int first_array[5] = {1, 2, 3, 4, 5};
    int second_array[5] = {0};
    /*BEFORE THE SWITCH OF VALUES*/
    printf("********** antes da copia de valores **********\n");
    printf("primeiro array: \n");
    print_array(first_array, 5);
    printf("segundo array: \n");
    print_array(second_array, 5);

    printf("********** depois da copia de valores **********\n");
    copy_values(first_array, second_array, 5);
    printf("primeiro array: \n");
    print_array(first_array, 5);
    printf("segundo array: \n");
    print_array(second_array, 5);

    return 0;
}

void print_array(int array[], int array_length)
{
    for(int i = 0; i < array_length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void copy_values(int first_array[], int second_array[], int arrays_lenghts)
{
    for(int i = 0; i < arrays_lenghts; i++)
    {
        second_array[i] = first_array[i];
    }
}