// O programa deverá criar uma struct para carro, criar uma struct de carro.
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
  void comprar_ou_nao(struct carro modelo);
  struct carro pegar_valores(struct carro modelo);
  struct carro volkswagen_gol;
  printf("------------------Comprar carro ou nao?------------------\n");

  volkswagen_gol = pegar_valores(volkswagen_gol);
  comprar_ou_nao(volkswagen_gol);

  return 0;
}

struct carro pegar_valores(struct carro modelo)
{
  printf("Insira o modelo do carro que esta avaliando...\n");
  gets(modelo.nome);
  printf("qual o ano do seu carro?\n");
  scanf("%d", &modelo.ano);
  printf("este carro eh novo? 'S' ou 'N'.\n");
  scanf(" %c", &modelo.novo);
  printf("qual o valor que esta sendo cobrado por ele?\n");
  scanf("%f", &modelo.valor);
  printf("este carro esta de alguma forma danificado? 'S' ou 'N'.\n");
  scanf(" %c", &modelo.danificado);

  return modelo;
}

void comprar_ou_nao(struct carro modelo)
{
  int pontos = 100;
  pontos -= 2023 - modelo.ano; // o carro perderá um ponto a cada ano passado.

  if (modelo.novo == 'N')
    pontos -= 10;

  if (pontos < 80 && modelo.valor > 60000)
    pontos -= 10;

  if (modelo.danificado == 'S')
    pontos -= 10;

  if (pontos < 50)
    printf("nao vale a pena!\n");
  else
    printf("vale a pena.\n");

  printf("pontuacao: %d de 100.\n", pontos);
}