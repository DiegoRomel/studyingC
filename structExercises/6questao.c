# include <stdio.h>
#include <math.h>

struct Ponto
{
    float x, y;
};


struct Retangulo
{
    struct Ponto ponto_inicial;
    struct Ponto ponto_base;
    struct Ponto ponto_altura;
    float altura;
    float largura;
};


int main(void)
{
    struct Ponto pegar_pontos(struct Ponto ponto);
    float distancia_pontos(struct Ponto ponto1, struct Ponto ponto2);

    struct Retangulo retangulo;
    struct Ponto outro_ponto;
    retangulo.ponto_inicial.x = 0.0;
    retangulo.ponto_inicial.y = 0.0;

    printf("insira o ponto superior esquerdo do retangulo: \n");
    retangulo.ponto_altura = pegar_pontos(retangulo.ponto_altura);

    printf("insira o ponto inferior direito do retangulo: \n");
    retangulo.ponto_base = pegar_pontos(retangulo.ponto_base);

    printf("insira o ponto que deseja saber se esta dentro do retangulo: \n");
    printf("insira sua coordenada x: \n");
    scanf("%f", &outro_ponto.x);

    printf("insira sua coordenada x: \n");
    scanf("%f", &outro_ponto.y);

    if(outro_ponto.x > retangulo.ponto_base.x || outro_ponto.y > retangulo.ponto_altura.y)
    {
        printf("o ponto nao esta no retangulo.\n");
    }
    else
    {
        printf("o ponto se encontra no retangulo.\n");
    }

    return 0;
}

float distancia_pontos(struct Ponto ponto1, struct Ponto ponto2)
{
    float distancia = pow(pow((ponto1.x - ponto2.x), 2) + pow((ponto1.y - ponto2.y), 2), 1.0 / 2);

    return distancia;
}

struct Ponto pegar_pontos(struct Ponto ponto)
{
    printf("insira o x do ponto: \n");
    scanf("%f", &ponto.x);

    printf("insira o y do ponto: \n");
    scanf("%f", &ponto.y);

    return ponto;
}

