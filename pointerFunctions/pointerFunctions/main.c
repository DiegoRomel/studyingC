//
//  main.c
//  pointerFunctions
//
//  Created by Diego Rômel Perna Souza on 02/09/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //declarando variável e printando valor e espaço de memória
    int x;
    x = 10;
    printf("valor de x: %i\n", x);
    printf("valor de x: %x\n", &x);
    
    //declarando ponteiro e associando a um espaço de memória
    int *px;
    px = &x;
    printf("valor de x atraves do ponteiro: %i\n", *px);
    printf("espaco de memoria armazenado no ponteiro: %x\n", px);
    
    return 0;
}
