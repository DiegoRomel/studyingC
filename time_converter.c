#include <stdio.h>
int main(void)
{
  int h, m, s, resto, input;
  scanf("%d", &input);
  h = input / 3600;
  resto = input % 3600;
  m = resto / 60;
  s = resto % 60;
  printf("%d:%d:%d\n", h, m, s);
  return 0;
}