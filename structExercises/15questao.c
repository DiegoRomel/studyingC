#include <stdio.h>
#include <string.h>

/* estrutura para o registro da agenda */
struct RegistroAgenda {
    char nome[50];
    char sobrenome[50];
    char telefoneMovel[15];
    char telefoneFixo[15];
    char email[100];
};

int main() {
    struct RegistroAgenda agenda[100]; /* array de estruturas para até 100 registros */
    int numRegistros;

    printf("Quantos registros deseja adicionar (até 100)? ");
    scanf("%d", &numRegistros);

    /* verifica se o número de registros está dentro do limite */
    if (numRegistros <= 0 || numRegistros > 100) {
        printf("Número de registros inválido. Encerrando o programa.\n");
        return 1;
    }

    /* faz a leitura dos dados para cada registro */
    for (int i = 0; i < numRegistros; i++) {
        printf("\nRegistro #%d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", agenda[i].nome); /* %s para ler strings sem espaços */
        printf("Sobrenome: ");
        scanf("%s", agenda[i].sobrenome);
        printf("Telefone Móvel: ");
        scanf("%s", agenda[i].telefoneMovel);
        printf("Telefone Fixo: ");
        scanf("%s", agenda[i].telefoneFixo);
        printf("E-mail: ");
        scanf("%s", agenda[i].email);
    }

    /* exibe os registros na tela */
    printf("\nRegistros na Agenda:\n");
    for (int i = 0; i < numRegistros; i++) {
        printf("\nRegistro #%d:\n", i + 1);
        printf("Nome: %s %s\n", agenda[i].nome, agenda[i].sobrenome);
        printf("Telefone Móvel: %s\n", agenda[i].telefoneMovel);
        printf("Telefone Fixo: %s\n", agenda[i].telefoneFixo);
        printf("E-mail: %s\n", agenda[i].email);
    }

    return 0;
}
