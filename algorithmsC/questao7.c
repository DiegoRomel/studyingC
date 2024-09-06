#include <stdio.h>

int main(void)
{
    float salario_antes, salario_depois, percentual_reajuste;
    printf("insira seu atual salario: \n");
    scanf("%f", &salario_antes);
    printf("insira o percentual de reajuste sem o simbolo de porcentagem: \n");
    scanf("%f", &percentual_reajuste);
    salario_depois = (salario_antes * percentual_reajuste / 100) + salario_antes;
    printf("seu salario com reajuste de %.2f%% fica: %.2f\n", percentual_reajuste, salario_depois);
    return 0;
}
