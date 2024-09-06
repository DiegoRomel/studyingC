#include <stdio.h>

int main(void)
{
  int x = 10;
  printf("valor de x: %d\n", x);
  // 10
  
  // declarando o ponteiro
  int *pt_varX = &x;
  // o ponteiro vai assumir o endereço de x
  
  *pt_varX = 20;
  // mudando o VALOR do endereço do ponteiro para 20
  
  printf("valor final de x: %d\n", x);
  
  return 0;
}