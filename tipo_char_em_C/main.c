#include <stdio.h>
#include <stdlib.h>
// usando o tipo char em C

int main() {
// Caracteres em variáveis tipo char.
    char letra = 'R';
    char numero = '5';
    char especial = '$';

    printf("O tipo char armazena apenas um caractere.\n");
    printf("Este pode ser letra, simbolo, numero e etc.\n");
    printf("letra: %c, numero: %c, especial: %c\n", letra, numero, especial);

// A linguagem C não possui o tipo 'string', então para armazenarmos texto
// utilizamos um vetor de char. Veja a seguir:

    char palavra[10] = "Bom dia!";
    printf("variavel palavra: %s\n", palavra);
    return 0;
}
