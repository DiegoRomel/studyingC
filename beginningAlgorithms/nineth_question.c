/*
Escrever um programa que cadastre o nome, a altura, o peso,
o cpf e sexo de algumas pessoas.
*/

#include <stdio.h>

struct Pessoa
{
    char nome[20];
    float peso;
    float altura;
}pessoa1, pessoa2;


int main(void)
{
    struct Pessoa armazenar_valores(struct Pessoa pessoa);
    void printar_valores(struct Pessoa pessoa);

    printf("primeira pessoa: \n");
    pessoa1 = armazenar_valores(pessoa1);

    printf("segunda pessoa: \n");
    pessoa2 = armazenar_valores(pessoa2);

    printf("\n\nValores pessoa1:\n");
    printar_valores(pessoa1);
    printf("\n\nValores pessoa2:\n");
    printar_valores(pessoa2);

    return 0;
}

struct Pessoa armazenar_valores(struct Pessoa pessoa)
{
    printf("insira o nome: \n");
    scanf("%s", pessoa.nome);

    printf("insira o peso: \n");
    scanf("%f", &pessoa.peso);

    printf("insira a altura: \n");
    scanf("%f", &pessoa.altura);

    return pessoa;
}

void printar_valores(struct Pessoa pessoa)
{
    printf("nome: %s\n", pessoa.nome);
    printf("peso: %.2f\n", pessoa.peso);
    printf("altura: %.2f\n", pessoa.altura);
}