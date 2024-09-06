#include <stdio.h>
int main(void)
{
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  if (A > B && A < C)
  {
    printf("%d", A);
  }
  else if (A < B && A > C)
  {
    printf("%d", A);
  }
  else if (B > A && B < C)
  {
    printf("%d", B);
  }
  else if (B < A && B > C)
  {
    printf("%d", B);
  }
  else if (C > A && C < B)
  {
    printf("%d", C);
  }
  else if (C < A && C > B)
  {
    printf("%d", C);
  }
  else
  {
    printf("vaitomanocu");
  }

  return 0;
}