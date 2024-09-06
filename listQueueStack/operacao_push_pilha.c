#include <stdio.h>
void printar_pessoa(Pessoa p);
Pessoa ler_pessoa(void);

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



int main(void)
{
    No *topo = NULL;
    int opcoes;

    printf("1 - empilhar\n2 - desempilhar\n3 - imprimir\n0 - sair\n");
    scanf("%d", &opcoes);
    do
    {
        switch(opcoes)
        {
            case 1:
                topo = empilhar(topo); // o ponteiro topo recebe o novo topo retornado da função desempilhar
                break;
        }
    } while (opcoes != 0);
    


    return 0;
}


Pessoa ler_pessoa(void)
{
    Pessoa p;
    printf("entre com o nome e a idade separados por uma linha...\n");
    scanf("%c %d", &p.nome, &p.idade);
    return p;
}

void printar_pessoa(Pessoa p)
{
    printf("nome: %c\nidade: %d\n", p.nome, p.idade);
}

No *empilhar(No *topo)
{
    // alocando espaço na memória e retornando o endereço para o ponteiro *novo do tipo No
    No *novo = malloc(sizeof(No));

    // se foi possivel alocar espaço na memória...
    if(novo)
    {
        novo->p = ler_pessoa(); // os dados da pessoa irão ser armazenados
        novo->proximo = topo; // o ponteiro *proximo do novo nó vai apontar para o antigo topo
        return novo;
    }
    // se não foi possível alocar espaço na memória...
    else
    {
        printf("nao foi possivel alocar memoria...\n");
    }
}

No *desempilhar(No **topo)
{
    
}