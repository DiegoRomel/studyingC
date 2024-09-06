#include <stdio.h>

struct Pessoa
{
    char nome[30];
    int idade;
    char endereco[40];
}pessoa1;

int main(void)
{   
    struct Pessoa coletar_dados(struct Pessoa pessoa);
    void printar_dados(struct Pessoa pessoa);

    pessoa1 = coletar_dados(pessoa1);

    printar_dados(pessoa1);

    return 0;
}

struct Pessoa coletar_dados(struct Pessoa pessoa)
{
    printf("insira seu nome: \n");
    scanf("%s", pessoa.nome);

    printf("insira sua idade: \n");
    scanf("%d", &pessoa.idade);

    printf("insira seu endereco (utilize underline em vez de espacos): \n");
    scanf("%s", pessoa.endereco);

    return pessoa;
}

void printar_dados(struct Pessoa pessoa)
{   
    printf("\nos dados inseridos foram: \n");
    printf("nome: %s\n", pessoa.nome);
    printf("idade: %d\n", pessoa.idade);
    printf("endereco: %s\n", pessoa.endereco);
}