#include <stdio.h>
#include <string.h>

int main() {
  char prod[10][10], nome[10];
  float valor[10], vlr_venda;
  int estoque[10], continuar = 0, opcao = 0, qtd, z = 0, i = 0;
  do {
    printf("### TABERNA CASCA DE BALA ###");
    printf("1 CADASTRAR\n");
    printf("1 LISTAR\n");
    printf("1 BUSCAR\n");
    printf("1 VENDER\n");
    
    printf("ESCOLHA UMA OPCAO\n");
    scanf("%d", &opcao);
    switch(opcao) {
      case 1:
      printf("CADASTRAR PRODUTOS\n");
      printf("DIGITE O PRODUTO\n");
      scanf("%s", prod[i]);
      printf("DIGITE O PRECO\n");
      scanf("%f", &valor[i]);
      printf("DIGITE O ESTOQUE\n");
      scanf("%d", &estoque[i]);
      i++;
      printf("PRODUTO CADASTRADO COM SUCESSO\n");
      printf("%s", prod[i]);
      break;
      case 2:
      break;


    printf("DIGITE 0 P/ SAIR OU 1 P/ CONTINUAR\n");
    scanf("%d", &continuar);
    } while (continuar != 0);
  }
}