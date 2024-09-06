// O programa deverá criar uma struct para carro, criar uma struct de carro com o nome dado pelo user.
// o user deve passar as características do carro.
// o programa deverá retornar se vale a pena comprar o carro ou não.
#include <stdio.h>
#include <stdlib.h>

struct carro
{
  char nome[20];
  int ano;
  char novo;
  float valor;
  char danificado;
};

int main(void)
{
  struct carro volkswagen_gol;
  printf("------------------Comprar carro ou nao?------------------\n");
  printf("Insira o modelo do carro que esta avaliando...\n");
  gets(volkswagen_gol.nome);
  printf("nome do carro: %s\n", volkswagen_gol.nome);

  return 0;
}
