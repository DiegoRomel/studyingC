#include <stdio.h>
void conta_horas(int inicio, int fim);
int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    conta_horas(x, y);

    return 0;
}


void conta_horas(int inicio, int fim)
{
    int tempo;
    if(inicio >= fim)
        tempo = 24 - inicio + fim;
    else
        tempo = fim - inicio;
    
    printf("O JOGO DUROU %d HORA(S)\n", tempo);
}