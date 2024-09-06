// função para fazer a soma de dois modulos de numeros.
#include <stdio.h>

int main(void)
{
  float somaModulos(float num1, float num2);

  float num1, num2;
  scanf("%f %f", &num1, &num2);

  float resultado = somaModulos(num1, num2);
  printf("resultado: %f\n", resultado);
}

float somaModulos(float x, float y)
{
  float converterModulo(float m);
  float soma;
  if (x < 0)
  {
    x = converterModulo(x);
  }
  if (y < 0)
  {
    y = converterModulo(y);
  }
  soma = x + y;
  return soma;
}

float converterModulo(float m)
{
  m *= (-1);
  return m;
}
