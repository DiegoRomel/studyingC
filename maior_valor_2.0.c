#include <stdio.h>
int main(void)
// programa para saber o maior valor
{
  int i, valorUsuario, maiorValor;
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &valorUsuario);
    if (i == 0)
    {
      maiorValor = valorUsuario;
    }
    else if (valorUsuario > maiorValor)
    {
      maiorValor = valorUsuario;
    }
  }
  printf("o maior valor eh %d\n", maiorValor);
  return 0;
}