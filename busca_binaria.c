/*
    binary_search
    the array must be sorted
*/
#include <stdio.h>


int binary_search(int array[], int target, int array_length)
{
    int min_index = 0;
    int max_index = array_length - 1;

    while (min_index <= max_index)
    {
        int middle_index = min_index + max_index / 2;
        int guess = array[middle_index];
        printf("min_index: %d, max_index: %d, guess: %d, middle_index: %d\n", min_index, max_index, guess, middle_index);
        if (guess == target)
        {
            return middle_index;
        }
        else if (guess > target)
        {
            max_index = middle_index - 1;
        }
        else
        {
            min_index = middle_index + 1;
        }
    }
    return -1;
}



#include <stdio.h>



int main(void)
{
    int test_array[] = {1, 2, 3, 4, 5};
    int array_length = sizeof(test_array) / sizeof(test_array[0]);
    
    printf("%d\n", binary_search(test_array, 6, array_length));


    return 0;
}