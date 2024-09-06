#include <stdio.h>
int main() {

    int N[20];

    /*vai ler os elementos do vetor*/
    printf("Informe os elementos do vetor N(20):\n");

    for (int i = 0; i < 20; i++) {

        printf("Elemento %d: ", i + 1);

        scanf("%d", &N[i]);

    }

    /*vai trocar os elementos como solicitado*/
    for (int i = 0; i < 10; i++) {

        int temp = N[i];

        N[i] = N[19 - i];

        N[19 - i] = temp;

    }

    /*imprime o vetor modificado*/
    printf("Vetor N modificado:\n");

    for (int i = 0; i < 20; i++) {

        printf("%d ", N[i]);

    }

    printf("\n");

    return 0;

}