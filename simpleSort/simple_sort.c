#include <stdio.h>
//simple_sort

void replace(int *first_item, int *second_item);

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int e = a, f = b, g = c;
    int array[3] = {e, f, g};
    int array2[3] = {a, b, c};

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(array[j] > array[i])
            {
                replace(&array[j], &array[i]);
            }
        }
    }



    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", array[i]);
    }
    printf("\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", array2[i]);
    }


    return 0;
}

void replace(int *first_item, int *second_item)
{
    int aux = *first_item;
    *first_item = *second_item;
    *second_item = aux;
}
