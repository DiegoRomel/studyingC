#include <stdio.h>

int main() {
    int lista[] = {10, 20, 30, 40, 50};
    int *ptr = lista; // Apontar para o primeiro elemento da lista

    int tamanho = sizeof(lista) / sizeof(lista[0]); // Calcular o tamanho da lista

    printf("Elementos da lista: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *ptr); // Imprimir o valor apontado por ptr
        ptr++; // Mover o ponteiro para o próximo elemento
    }
    
    printf("\n");

    return 0;
}