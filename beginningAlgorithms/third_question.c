#include <stdio.h>

int main(void)
{
    void unir_arrays(int first_array[], int second_array[], int result_array[]);
    void print_vetor(int array[]);
    int first_array[5] = {1, 2, 3, 4, 5};
    int second_array[5] = {6, 7, 8, 9, 10};
    int result_array[10];

    unir_arrays(first_array, second_array, result_array);
    print_vetor(result_array);
    return 0;
}

void unir_arrays(int first_array[], int second_array[], int result_array[])
{
    int i = 0;
    for(; i < 5;)
    {
        result_array[i] = first_array[i];
        i++;
    }

    for(int j = 0; i < 10;j++)
    {
        result_array[i] = second_array[j];
        i++;
    }

}

void print_vetor(int array[])
{
    for(int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}