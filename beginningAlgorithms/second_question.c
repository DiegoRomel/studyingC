/*soma de vetores*/

#include <stdio.h>

int main(void)
{
    void soma_vetores(int first_array[], int second_array[]);
    int first_array[5] = {1, 2, 3, 4, 5};
    int second_array[5] = {6, 7, 8, 9, 10};
    soma_vetores(first_array, second_array);


    return 0;
}


void soma_vetores(int first_array[], int second_array[])
{
    void print_vetor(int array[]);
    int result_array[5] = {0};
    for(int i = 0; i < 5; i++)
    {
        result_array[i] = first_array[i] + second_array[i];
    }

    printf("o array resultado eh: \n");
    print_vetor(result_array);

}


void print_vetor(int array[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}