#include <stdio.h>

int main(void)
{
    int resultado = 0;
    int matriz[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}}; 

    int lim = 1;

    for(int i = 1; i < 4; i++)
    {
        for(int j = 0; j < lim; j++)
        {
            resultado = resultado + matriz[i][j];
        }
        lim++;
    }

    printf("resultado: %d\n", resultado);

    return 0;
}