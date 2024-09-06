#include <stdio.h>
#include <stdlib.h>

//aplicando vetores e matrizes

int main(void)
{
    //Vetores são arrays de dados do mesmo tipo arranjados em posições consecutivas na memória RAM.
    //matrizes são arrays de dados do mesmo tipo que podem ter mais de uma dimensão,
    //ao contrário dos vetores.


    int nota[5];//vetor que armazena 5 valores de tipo inteiro

    //para acessar cada nota individualmente...obs: contagem começa pelo 0.
    nota[0] = 10;
    nota[1] = 5;
    nota[2] = 4;
    nota[3] = 2;
    nota[4] = 7;
    printf("terceira nota: %d\n", nota[2]);
    //----------------------------------------------------------------------

    // na pratica com um ciclo:

    int idades[3];
    idades[0] = 33;
    idades[1] = 56;
    idades[2] = 13;

    for(int i = 0; i < 3; i++){
        printf("%d\n",idades[i]);
    }
    //----------------------------------------------------------------------
     //iniciando um vetor com valores predefinidos:
    int valores[4] = {1, 2, 3, 4};
    printf("3o elemento do vetor valores: %d\n", valores[2]);


    //----------------------------------------------------------------------


    // matrizes
    printf("usando matrtizes...\n");
    int matriz[2][2] = {{1, 2},
                        {3, 4}};
    printf("valor linha 2, coluna 1 do vetor da matriz: %d\n", matriz[1][0]);


    return 0;
}
