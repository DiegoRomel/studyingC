#include <stdio.h>

int main(void)
{
    int quantidade_macas;

    printf("insira a quantidade de macas que esta comprando: \n");
    scanf("%d", &quantidade_macas);

    if(quantidade_macas < 12)
        printf("valor total da compra: %.2f, sendo cada maca 1.30.\n", quantidade_macas * 1.30);
    else
        printf("valor total da compra: %d, sendo cada maca 1\n", quantidade_macas);

    return 0;
}