#include <stdio.h>
int main(void)
{
  int A, B, C;
  int aux;

  scanf("%d %d %d", &A, &B, &C);

  if (A > C)
  {
    aux = C;
    C = A;
    A = aux;
  }
  if (A > B)
  {
    aux = B;
    B = A;
    A = aux;
  }
  if (B > C)
  {
    aux = C;
    C = B;
    B = aux;
  }
}