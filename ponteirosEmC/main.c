#include <stdio.h>
#include <stdlib.h>

//ponteiros
int continuacao();
int main()
{
    //ponteiros s�o vari�veis que armazenam o endere�o de mem�ria de
    //outras vari�veis. para cria-las se usa '*' para indicar que
    //a vari�vel ser� um ponteiro.
    //ex: int *ponteiro;
    //------------------------------------------------------------
    //sabendo o endere�o de mem�ria de uma vari�vel...
    int x; //reservando espa�o na mem�ria para vari�vel
    x = 10; //atribuindo um valor � vari�vel
    printf("valor da variavel: %d\n", x); //retorna o valor da vari�vel
    printf("endereco da variavel: %d\n",&x); //retorna o endere�o da vari�vel

    //obs: o caracter '&' � usado para especificar o espa�o na mem�ria.
    //------------------------------------------------------------

    //CRIANDO UM PONTEIRO...
    int *ponteiro; //declara��o do ponteiro. 'int' -> o tipo de dado que ele est� apontando. No caso 'x'-> int.
    ponteiro = &x; //guardando o espa�o de mem�ria da vari�vel 'x' no ponteiro.
    printf("espaco de memoria armazenado no ponteiro: %d\n", ponteiro); //retornar� o espa�o de mem�ria de 'x'.
    //para mostrar o valor da vari�vel de um ponteiro...
    printf("valor da variavel do ponteiro: %d\n", *ponteiro); //usando o asteristico na chamada da vari�vel.
    printf("------------------------------------------------------------------------------------------\n");
    continuacao();
    return 0;
}










