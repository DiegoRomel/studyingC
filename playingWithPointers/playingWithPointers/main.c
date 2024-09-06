//
//  main.c
//  playingWithPointers
//
//  Created by Diego Rômel Perna Souza on 02/09/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 10;
    int *ponteirox = &x;
    int y = 20;
    *ponteirox = y;
    
    printf("x: %i y: %i\n", x, y);
    
    return 0;
}
