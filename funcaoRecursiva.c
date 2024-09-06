#include <stdio.h>
// funcao recursiva para calcular fatorial
int main(void)
{
  int calcFatorial(int a);
  int x, resultado;

  printf("isnira um valor: \n");
  scanf("%d", &x);
  resultado = calcFatorial(x);
  printf("o fatorial deste numero equivale a: %d", resultado);
  return 0;
}

int calcFatorial(int a)
{
  int resultado;
  if (a == 0)
  {
    resultado = 1;
  }
  else
  {
    resultado = calcFatorial(a - 1);
  }
}
