#include <stdio.h>
#include <stdlib.h>

struct hora
{
  int hora;
  int minuto;
  int segundo;
} agora = {17, 10, 5}; // criando uma struct hora e atribuindo valor.

int main(void)
{
  printf("%d:%d:%d.\n", agora.hora, agora.minuto, agora.segundo);

  return 0;
}