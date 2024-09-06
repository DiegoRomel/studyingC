#include <stdio.h>
int main() {
    int mat[2][3];
    int soma = 0;
    /*lê os elementos da matriz*/
    printf("Digite os elementos da matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    /*calcula a soma dos elementos*/
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            soma += mat[i][j];
        }
    }
    /*imprime a matriz*/

    printf("\nMatriz:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    /*imprime a soma dos elementos*/
    printf("\nA soma dos elementos da matriz é: %d\n", soma);

    return 0;

}
