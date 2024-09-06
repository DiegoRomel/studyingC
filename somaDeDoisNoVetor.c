#include <stdio.h>

int main(void)
{
  int x, y, soma;
  int Vetor[12];

  printf("Entre com 12 valores, digitando a tecla 'enter' após cada um.\n");

  for (int controle = 1; controle <= 12; controle++)
  {
    printf("%do numero: ", controle);
    scanf("%d", &Vetor[controle]);
  }

  printf("\nInsira dois valores entre 0 e 12 e ele sera usado como posicao dos numeros inseridos anteriormente.\n");
  scanf("%d %d", &x, &y);

  soma = Vetor[x] + Vetor[y];
  printf("A soma destes 2 numeros equivale a: %d\n", soma);

  return 0;
}