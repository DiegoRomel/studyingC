#include <stdio.h>

void calcular_reajuste(float salario);
void print_salario(float salario, int reajuste);
int main(void)
{
    float entrada;
    scanf("%f", &entrada);
    calcular_reajuste(entrada);

    return 0;
}


void calcular_reajuste(float salario)
{
    float reajuste;
    if(salario <= 400)
        reajuste = 15;
    else if(salario <= 800)
        reajuste = 12;
    else if(salario <= 1200)
        reajuste = 10;
    else if(salario <= 2000)
        reajuste = 7;
    else
        reajuste = 4;

    print_salario(salario, reajuste);
}


void print_salario(float salario, int reajuste)
{
    float novo_salario = (salario + (salario * reajuste / 100));
    float reajuste_ganho = (salario * reajuste / 100);
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", novo_salario, reajuste_ganho, reajuste);
}