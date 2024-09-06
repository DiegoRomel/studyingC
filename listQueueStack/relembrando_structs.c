#include <stdio.h>

struct Horario
{
    int horas;
    int minutos;
    int segundos;
} agora = {10, 20, 30};
/* desta forma, a variável agora é inicializada e tem seus valores definidos*/

int main(void)
{
    printf("horas: %d\nminutos: %d\nsegundos: %d\n", agora.horas, agora.minutos, agora.segundos);

    return 0;
}   