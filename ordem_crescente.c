#include <stdio.h>
int main(void)
{
  int A, B, C, maior, medio, menor;
  scanf("%d %d %d", &A, &B, &C);
  if (A > B && A > C)
  {
    maior = A;
  }
  else if (B > A && B > C)
  {
    maior = B;
  }
  else if (C > A && C > B)
  {
    maior = C;
  }
  if (A > B && A < C)
  {
    medio = A;
  }
  else if (A < B && A > C)
  {
    medio = A;
  }
  else if (B > A && B < C)
  {
    medio = B;
  }
  else if (B < A && B > C)
  {
    medio = B;
  }
  else if (C > A && C < B)
  {
    medio = C;
  }
  else if (C < A && C > B)
  {
    medio = C;
  }
  if (A < B && A < C)
  {
    menor = A;
  }
  else if (B < A && B < C)
  {
    menor = B;
  }
  else if (C < A && C < B)
  {
    menor = C;
  }
  printf("%d %d %d", menor, medio, maior);
  return 0;
}