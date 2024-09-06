#include <stdio.h>
int gVariavelGlobal = 2;

int main(void)
{
  void variavelLocalAutomatica(void);
  void variavelLocalEstatica(void);
  void funcVariavelGlobal(void);

  //  variavelLocalAutomatica();
  //  printf("\n\n\n");
  //  variavelLocalEstatica();
  //  funcVariavelGlobal();
  return 0;
}

void variavelLocalAutomatica(void)
{
  int variavelLocalAutomatica = 5;
  variavelLocalAutomatica *= 5;
  printf("%d\n", variavelLocalAutomatica);
}

void variavelLocalEstatica(void)
{
  static int variavelLocalEstatica = 5;
  variavelLocalEstatica *= 5;
  printf("%d\n", variavelLocalEstatica);
}

void funcVariavelGlobal(void)
{
  gVariavelGlobal = gVariavelGlobal * 2;
  printf("\nvariavel global: %d\n", gVariavelGlobal);
}