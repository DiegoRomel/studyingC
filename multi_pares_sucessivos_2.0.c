int questao01(int valor)
{
  int i, aux1, aux2 = 1;
  valor += valor;
  for (i = 1; i <= valor; i++)
  {
    aux1 = i % 2;
    if (aux1 % 2 == 0)
    {
      aux2 *= i;
    }
  }
  valor = aux2;
  return valor;
}

#include <stdio.h>

int main()
{
  long int valor;

  scanf("%ld%*c", &valor);
  printf("%ld\n", questao01(valor));
}
