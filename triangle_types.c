#include <math.h>
#include <stdio.h>

void shift_values(float *valor1, float *valor2);
void bubble_sort(float array[], int size);
void check_triangle(float valor1, float valor2, float valor3);
int main(void)
{
    float array[3] = {0};
    int size = sizeof(array) / sizeof(array[0]);

    scanf("%f %f %f", &array[0], &array[1], &array[2]);
    bubble_sort(array, size);
    check_triangle(array[0], array[1], array[2]);

    return 0;
}

void shift_values(float *valor1, float *valor2)
{
    float aux = *valor1;
    *valor1 = *valor2;
    *valor2 = aux;
}




void check_triangle(float valor1, float valor2, float valor3)
{
    if(valor1 >= (valor2 + valor3))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(pow(valor1, 2) == pow(valor2, 2) + pow(valor3, 2))
            printf("TRIANGULO RETANGULO\n");
        if(pow(valor1, 2) > pow(valor2, 2) + pow(valor3, 2))
            printf("TRIANGULO OBTUSANGULO\n");
        if(pow(valor1, 2) < pow(valor2, 2) + pow(valor3, 2))
            printf("TRIANGULO ACUTANGULO\n");
        if(valor1 == valor2 && valor2 == valor3)
            printf("TRIANGULO EQUILATERO\n");
        else if(valor1 == valor2 || valor1 == valor3 || valor2 == valor3)
            printf("TRIANGULO ISOSCELES\n");
    }
}

void bubble_sort(float array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i; j < size; j++)
        {
            if(array[i] < array[j])
            {
                shift_values(&array[i], &array[j]);
            }
        }
    }
}