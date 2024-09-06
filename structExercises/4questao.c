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
    retangulo.ponto_inicial.x = 0.0;
    retangulo.ponto_inicial.y = 0.0;

    printf("insira o ponto superior esquerdo do retangulo: \n");
    retangulo.ponto_altura = pegar_pontos(retangulo.ponto_altura);

    printf("insira o ponto inferior direito do retangulo: \n");
    retangulo.ponto_base = pegar_pontos(retangulo.ponto_base);

    float altura_retangulo = distancia_pontos(retangulo.ponto_inicial, retangulo.ponto_altura);
    float base_retangulo = distancia_pontos(retangulo.ponto_inicial, retangulo.ponto_base);

    float area = altura_retangulo * base_retangulo;
    /*o comprimento da diagonal será chamado de hipotenusa para fins práticos*/
    float hipotenusa = pow((pow(altura_retangulo, 2) + pow(base_retangulo, 2)), (1.0 / 2));
    float perimetro = (altura_retangulo * 2) + (base_retangulo * 2);

    printf("a area do retangulo eh: %.2f\n", area);
    printf("o comprimento da diagonal equivale a: %.2f\n", hipotenusa);
    printf("o perimetro eh: %.2f", perimetro);

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

