#include <stdio.h>
#include <math.h>

struct Ponto
{
    float x;
    float y;
}ponto1, ponto2;

int main(void)
{
    void distancia_pontos(struct Ponto ponto1, struct Ponto ponto2);
    struct Ponto pegar_coordenadas(struct Ponto ponto);

    printf("primeiro ponto:\n");
    ponto1 = pegar_coordenadas(ponto1);
    printf("segundo ponto:\n");
    ponto2 = pegar_coordenadas(ponto2);
    distancia_pontos(ponto1, ponto2);

    return 0;
}

void distancia_pontos(struct Ponto ponto1, struct Ponto ponto2)
{
    float distancia = pow(pow((ponto1.x - ponto2.x), 2) + pow((ponto1.y - ponto2.y), 2), 1.0 / 2);

    printf("a distancia entre os pontos equivale a: %.2f\n", distancia);
}

struct Ponto pegar_coordenadas(struct Ponto ponto)
{
    printf("insira a coordenada x do ponto:\n");
    scanf("%f", &ponto.x);

    printf("insira a coordenada y do ponto:\n");
    scanf("%f", &ponto.y);

    return ponto;
}