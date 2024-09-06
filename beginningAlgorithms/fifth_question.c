#include <stdio.h>

void somarMatrizes(int A[][3], int B[][3], int resultado[][3], int linhas, int colunas) {

    for (int i = 0; i < linhas; i++) {

        for (int j = 0; j < colunas; j++) {
            resultado[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int linhas = 3;
    int colunas = 3;
    int matrizA[3][3] = {{2, 2, 3}, {4, 5, 4}, {7, 8, 7}};
    int matrizB[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultado[3][3];
    somarMatrizes(matrizA, matrizB, resultado, linhas, colunas);

    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {

        for (int j = 0; j < colunas; j++) {

            printf("%d ", resultado[i][j]);

        }

        printf("\n");

    }
    return 0;
}
