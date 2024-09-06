#include <stdio.h>
int main(void)
{
  int input, d, m, a, resto;
  scanf("%d", &input);
  a = input / 365;
  resto = input % 365;
  m = resto / 30;
  d = resto % 30;
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);

  return 0;
}