#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int A, B, C;
  // formula para o maior valor eh: (A + B + abs(A - B)) / 2
  scanf("%d %d %d", &A, &B, &C);

  int absol1 = abs(A - B);
  int maior1 = (A + B + absol1) / 2;

  int absol2 = abs(maior1 - C);
  int maior2 = (maior1 + C + absol2) / 2;

  printf("%d eh o maior\n", maior2);
  return 0;
}