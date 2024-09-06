#include <stdio.h>

struct Pessoa
{
    int idade;
    int altura;
};
typedef struct Pessoa Pessoa;


void pegar_dados(Pessoa *ponteiro_pessoa);
void printar_pessoa(Pessoa pessoa);
int main(void)
{
    Pessoa pessoa1 = {44, 170};
    Pessoa *ponteiro_pessoa;
    ponteiro_pessoa = &pessoa1;

    printar_pessoa(pessoa1);
    pegar_dados(ponteiro_pessoa);
    printar_pessoa(pessoa1);

    printf("%d", ponteiro_pessoa->idade);

    return 0;
}


void printar_pessoa(Pessoa pessoa)
{
    printf("idade: %d\n", pessoa.idade);
    printf("altura: %d\n", pessoa.altura);
}


void pegar_dados(Pessoa *ponteiro_pessoa)
{
    printf("insira a idade: \n");
    scanf("%d", &(*ponteiro_pessoa).idade);
    printf("insira a altura: \n");
    scanf("%d", &ponteiro_pessoa->altura);
}