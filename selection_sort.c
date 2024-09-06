// selection_sort
#include <stdio.h>


void swap_values(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}


void selection_sort(int array[], int arrays_length)
{
    for ( int i = 0; i < arrays_length; i++)
    {
        for (int j = 0; j < arrays_length; j++)
        {
            if (array[i] < array[j])
            {
                swap_values(&array[j], &array[i]);
            }
        }
    }
}


void print_array(int array[], int arrays_length)
{
    for (int i = 0; i < arrays_length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int main(void)
{
    int test_array[] = {4, 51, 5, 7, 8, 1};
    int arrays_length = sizeof(test_array) / sizeof(test_array[0]);
    selection_sort(test_array, arrays_length);
    print_array(test_array, arrays_length);

    return 0;
}