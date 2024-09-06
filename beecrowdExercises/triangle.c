#include <stdio.h>

int triangle_possible(float a, float b, float c);
float perimetro(float a, float b, float c);
float area_trapezio(float a, float b, float c);
int main(void)
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    if(triangle_possible(a, b, c))
    {
        printf("Perimetro = %.1f\n", perimetro(a, b, c));
    }
    else
    {
        printf("Area = %.1f\n", area_trapezio(a, b, c));
    }

    return 0;
}

int triangle_possible(float a, float b, float c)
{
    if(a + b > c && b + c > a && c + a > b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

float perimetro(float a, float b, float c)
{
    return a + b + c;
}

float area_trapezio(float a, float b, float c)
{
    return ((a + b) / 2) * c;
}