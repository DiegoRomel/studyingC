#include <stdio.h>
int main(void)
// programa para imprimir todos os primos entre 200 e 100 do maior ao menor.
{
  int j, i, naoEhPrimo;        /*j é a variável que dirá se é primo ou não ao ser constantemente comparada à i, se em algum momento o resto da divisão de i por j for igual  a 0 significa que o valor não é primo pois é par.*/
  for (i = 200; i >= 100; i--) /*a variável i serve para ser comparada e se vai diminuindo ao longo do tempo.*/
  {
    naoEhPrimo = 0;
    for (j = 2; j < i; j++) /*a variável j vai aumentando e testando se o resto da divisão com i resulta em 0, ela faz isso até chegar na própria i, caso nenhum valor tiver como resto da divisão 0 significa que o número é primo. */
    {
      if (i % j == 0)
      {
        naoEhPrimo = 1;
      }
    }
    if (naoEhPrimo == 0)
    {
      printf("%d\n", i);
    }
  }
  return 0;
}