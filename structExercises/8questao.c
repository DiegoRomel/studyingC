#include <stdio.h>
#include <string.h>


struct idade {
    char nome[40];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
};

int main() {
    
    struct idade pessoas[6];

   
    for (int i = 0; i < 6; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Digite o dia de nascimento dessa pessoa :");
        scanf("%d", &pessoas[i].diaNascimento);
        printf("Digite o mês de nascimento dessa pessoa :");
        scanf("%d", &pessoas[i].mesNascimento);
        printf("Digite o ano de nascimento dessa pessoa :");
        scanf("%d", &pessoas[i].anoNascimento);
    }

  
    struct idade maisNova = pessoas[0];
    struct idade maisVelha = pessoas[0];

    
    for (int i = 1; i < 6; i++) {
        if (pessoas[i].anoNascimento < maisNova.anoNascimento ||
            (pessoas[i].anoNascimento == maisNova.anoNascimento &&
             pessoas[i].mesNascimento < maisNova.mesNascimento) ||
            (pessoas[i].anoNascimento == maisNova.anoNascimento &&
             pessoas[i].mesNascimento == maisNova.mesNascimento &&
             pessoas[i].diaNascimento < maisNova.diaNascimento)) {
            maisNova = pessoas[i];
        }

        if (pessoas[i].anoNascimento > maisVelha.anoNascimento ||
            (pessoas[i].anoNascimento == maisVelha.anoNascimento &&
             pessoas[i].mesNascimento > maisVelha.mesNascimento) ||
            (pessoas[i].anoNascimento == maisVelha.anoNascimento &&
             pessoas[i].mesNascimento == maisVelha.mesNascimento &&
             pessoas[i].diaNascimento > maisVelha.diaNascimento)) {
            maisVelha = pessoas[i];
        }
    }

    
    printf("Pessoa mais nova: %s\n", maisNova.nome);
    printf("Pessoa mais velha: %s\n", maisVelha.nome);

    return 0;
}