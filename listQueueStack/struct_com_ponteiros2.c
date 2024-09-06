#include <stdio.h>
// structs com ponteiros


struct Horario
{
    int *pHora;
    int *pMinuto;
    int *pSegundo;
};


void printar_struct(struct Horario horario);
int main(void)
{
    struct Horario agora;
    int hora = 10;
    int minuto = 20;
    int segundo = 30;

    agora.pHora = &hora;
    agora.pMinuto = &minuto;
    agora.pSegundo = &segundo;

    printar_struct(agora);

    return 0;
}

void printar_struct(struct Horario horario)
{
    printf("hora: %d\n", *horario.pHora);
    printf("minuto: %d\n", *horario.pMinuto);
    printf("segundo: %d\n", *horario.pSegundo);
}