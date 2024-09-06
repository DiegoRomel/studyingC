#include <stdio.h>

int main(void)
{
    int carros_vendidos;
    float valor_total_vendas, salario, valor_por_venda, salario_final;
    printf("entre com o salario: \n");
    scanf("%f", &salario);
    printf("entre com o valor total de suas vendas: \n");
    scanf("%f", &valor_total_vendas);
    printf("entre com o valor que ganha por venda: \n");
    scanf("%f", &valor_por_venda);
    printf("entre com as vendas que fez no mes: \n");
    scanf("%d", &carros_vendidos);
    salario_final = salario + (carros_vendidos * valor_por_venda) + (valor_total_vendas * 5 / 100);

    printf("o salario final do funcionario equivale a: R$%.2f\n", salario_final);

    return 0;
}