#include <stdio.h>

struct Produto
{
    char nome[20];
    float valor;
    int validade;
}produto1, produto2, produto3;

int main(void)
{
    struct Produto armazenar_atributos(struct Produto item);
    void printar_atributos(struct Produto item);
    
    produto1 = armazenar_atributos(produto1);
    produto2 = armazenar_atributos(produto2);
    produto3 = armazenar_atributos(produto3);

    printar_atributos(produto1);
    printar_atributos(produto2);
    printar_atributos(produto3);


    return 0;
}

struct Produto armazenar_atributos(struct Produto item)
{
    printf("insira o nome: \n");
    scanf("%s", item.nome);

    printf("insira seu valor: \n");
    scanf("%f",&item.valor);

    printf("insira sua validade: \n");
    scanf("%d", &item.validade);

    return item;
}

void printar_atributos(struct Produto item)
{
    printf("aqui estao os dados do item: \n");
    printf("nome: %s\n", item.nome);
    printf("valor: %.2f\n", item.valor);
    printf("validade: %d\n", item.validade);
    printf("\n");

}