#include <stdio.h>

int main(void)
{
    float total_eleitores, brancos, nulos, validos;
    printf("insira o total de eleitores:\n");
    scanf("%f", &total_eleitores);
    printf("insira o numero de votos brancos, nulos e validos, nesta ordem.\n");
    scanf("%f %f %f", &brancos, &nulos, &validos);
    
    printf("brancos: %.2f%%\n", brancos / total_eleitores * 100);
    printf("nulos: %.2f%%\n", nulos / total_eleitores * 100);
    printf("validos: %.2f%%\n", validos / total_eleitores * 100);

    return 0;
}