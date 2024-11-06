#include <stdio.h>
#include <stdlib.h>

int check_midentidade(int **matriz, int tam_matriz);
void print_matriz(int **matriz, int tam_matriz);

int main(void)
{
    int **matriz, tam_matriz;
    // pega o tamanho da matriz
    printf("insira o tamanho da matriz quadrada: \n");
    scanf("%d", &tam_matriz);
    
    // alocação de memória para a matriz
    matriz = malloc(tam_matriz * sizeof(int*));
    for (int i = 0; i < tam_matriz; i++)
    {
        matriz[i] = malloc(tam_matriz * sizeof(int));
    }
    
    // pega os elementos da matriz um por um do usuário
    printf("insira uma matriz quadrada\n");
    for (int i = 0; i < tam_matriz; i++)
    {
        for (int j = 0; j < tam_matriz; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    print_matriz(matriz, tam_matriz);
    
    int identidade = check_midentidade(matriz, tam_matriz);
    if (identidade == 1)
    {
        printf("eh identidade\n");
    } else
    {
        printf("nao eh identidade\n");
    }
    
    return 0;
}

int check_midentidade(int **matriz, int tam_matriz)
{
    int identidade = 1;
    // checa se os elementos da diagonal principal sao todos iguais a 1
    for(int i = 0; i < tam_matriz; i++)
    {
        if (matriz[i][i] == 0)
        {
            identidade = 0;
        }
    }
    
    // checa se a soma de cada linha é maior que 1 (se nao for a matriz nao eh identidade)
    for (int i = 0; i < tam_matriz; i++)
    {
        int soma_linha = 0;
        for (int j = 0; j < tam_matriz; j++)
        {
            soma_linha += matriz[i][j];
        }
        if (soma_linha > 1)
        {
            identidade = 0;
        }
    }
    return identidade;
}

void print_matriz(int **matriz, int tam_matriz)
{
    for(int i = 0; i < tam_matriz; i++)
    {
        for(int j = 0; j < tam_matriz; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
