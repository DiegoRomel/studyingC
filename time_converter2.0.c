#include <stdio.h>
int main(void)
// programa para ler um valor em segundos e responder em horas, meses e segundos. Input é o valor a ser inserido.
{
  int input, h, m, s, resto;
  scanf("%d", &input);

  h = input / 3600;
  resto = input % 3600;
  m = resto / 60;
  s = resto % 60;

  printf("%d:%d:%d", h, m, s);

  return 0;
}