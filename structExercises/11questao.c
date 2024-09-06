#include <stdio.h>
#include <math.h>

typedef struct dma_struct{
   int dia;
   int mes;
   int ano;
}dma;

int main(){

   dma estrutura1, estrutura2;

   estrutura1.dia = 12;
   estrutura1.mes = 2;
   estrutura1.ano = 1;
   estrutura2.dia = 20;
   estrutura2.mes = 1;
   estrutura2.ano = 2;

   int diasEst1 = (estrutura1.dia)+(30*estrutura1.mes)+(365*estrutura1.ano);
   int diasEst2 = estrutura2.dia+(30*estrutura2.mes)+(365*estrutura2.ano);

   printf("Dias passadas para estrutura 1: %d\n",  diasEst1);
   printf("Dias passadas para estrutura 2: %d\n", diasEst2);
   printf("Diferença entre o maior e menor: %d\n", (diasEst1-diasEst2));

}