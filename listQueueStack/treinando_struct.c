#include <stdio.h>

// primeira forma de criar uma struct. Primeiro definindo e depois nomeando.
typedef struct {
    char nome[50];
    int idade;
}Pessoa;

// segunda forma de criar uma struct. Definindo o nome logo no início.
struct No
{
    Pessoa p;
    struct No *proximo;
} primeiro_no;




int main(void)
{


    return 0;
}

void print_pessoa(Pessoa p)
{
    printf("nome: %s\n", p.nome);
    printf("idade: %d\n", p.idade);
}

Pessoa ler_pessoa(Pessoa p)
{
    printf("insira o nome da pessoa:\n");
    scanf("%s", p.nome);
    printf("insira a idada da pessoa: \n");
    scanf("%d", &p.idade);

    return p;
}