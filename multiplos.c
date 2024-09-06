// multiples
# include <stdio.h>

int multiplos(int valor1, int valor2);
int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    if (multiplos(A, B))
        printf("Sao Multiplos\n");
    else
        printf("Nao Sao Multiplos\n");


    return 0;
}


int multiplos(int valor1, int valor2)
{
    if (valor1 % valor2 == 0 || valor2 % valor1 == 0)
        return 1;
    else
        return 0;
}