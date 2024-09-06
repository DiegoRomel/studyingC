#include <stdio.h>

int main(void)
{
    float nota1, nota2, nota3, media_ponderada;
    printf("insira suas 3 notas separadas por espacos: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media_ponderada = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
    printf("a media ponderada equivale a: %.2f.\n", media_ponderada);
    return 0;
}