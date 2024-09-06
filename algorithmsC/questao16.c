#include <stdio.h>

int main(void)
{
    int ano_atual, nascimento, idade;
    printf("insira o ano atual e seu ano de nascimento separados por espaco\n");
    scanf("%d %d", &ano_atual, &nascimento);
    idade = ano_atual - nascimento;

    if(idade >= 18)
        printf("voce pode votar este ano\n");
    else
        printf("nao podera votar este ano\n");

    return 0;
}