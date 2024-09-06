#include <stdio.h>
#include <stdlib.h>

//ponteiros
int continuacao();
int main()
{
    //ponteiros são variáveis que armazenam o endereço de memória de
    //outras variáveis. para cria-las se usa '*' para indicar que
    //a variável será um ponteiro.
    //ex: int *ponteiro;
    //------------------------------------------------------------
    //sabendo o endereço de memória de uma variável...
    int x; //reservando espaço na memória para variável
    x = 10; //atribuindo um valor à variável
    printf("valor da variavel: %d\n", x); //retorna o valor da variável
    printf("endereco da variavel: %d\n",&x); //retorna o endereço da variável

    //obs: o caracter '&' é usado para especificar o espaço na memória.
    //------------------------------------------------------------

    //CRIANDO UM PONTEIRO...
    int *ponteiro; //declaração do ponteiro. 'int' -> o tipo de dado que ele está apontando. No caso 'x'-> int.
    ponteiro = &x; //guardando o espaço de memória da variável 'x' no ponteiro.
    printf("espaco de memoria armazenado no ponteiro: %d\n", ponteiro); //retornará o espaço de memória de 'x'.
    //para mostrar o valor da variável de um ponteiro...
    printf("valor da variavel do ponteiro: %d\n", *ponteiro); //usando o asteristico na chamada da variável.
    printf("------------------------------------------------------------------------------------------\n");
    continuacao();
    return 0;
}










