#include <stdio.h>

int main(void)
{
    float nota1, nota2, media;

    printf("insira suas duas notas separadas por espaco: \n");
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2) / 2;
    printf("sua media eh: %.2f\n", media);
    if (media >= 6)
        printf("aprovado\n");
    else
        printf("reprovado\n");

    return 0;
}