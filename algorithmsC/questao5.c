#include <stdio.h>

int main(void)
{
    int anos, meses, dias, dias_totais;
    printf("insira a sua idade em anos, meses e dias com espaco entre cada.\n");
    scanf("%d %d %d", &anos, &meses, &dias);
    dias_totais = (anos * 365) + (meses * 30) + dias;
    printf("a sua idade em dias equivale a: %d\n", dias_totais);

    return 0;
}