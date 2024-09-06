#include <stdio.h>

//struct Pessoa
typedef struct
{
    char nome[50];
    int idade;
}Pessoa;

typedef struct no
{
    Pessoa p;
    struct no *proximo;
}No;


Pessoa ler_pessoa(void);
int main(void)
{
    No *topo = NULL;
    int opcao;

    printf("0 - sair\n1 - empilhar\n2 - desempilhar\n3 - imprimir\n");
    scanf("%d", &opcao);

    do
    {
        switch(opcao)
        {
            case 1:
                topo = empilhar(topo);
                break;
            case 2:
                break;
            case 3:
                break;
        }
    } while(opcao != 0);

    return 0;
}


Pessoa ler_pessoa(void)
{   
    Pessoa p;
    printf("insira o nome da pessoa.\n");
    scanf("%c", p.nome);
    printf("insira a idade da pessoa.\n");
    scanf("%d", p.idade);

    return p;
}

No *empilhar(No *topo)
{
    No *novo = malloc(sizeof(No));

    if(novo)
    {
    novo->p = ler_pessoa();
    novo->proximo = topo;
    return novo;
    }
    else
    {
        printf("nao foi possivel alocar memoria.\n");
    }
}