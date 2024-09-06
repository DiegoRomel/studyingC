//
//  main.c
//  controleItens
//
//  Created by Diego Rômel Perna Souza on 23/08/24.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char produto[10][10], nomeBusca[10];
    float valor[10];
    int continuar = 1, opcao, indice = 0, quantidade[10];
    do{
        printf("###TABERNA DO DJEGO###\n");
        printf("1 - CADASTRAR\n 2 - LISTAR\n 3 - BUSCAR\n 4 - VENDER\n");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("ENTRE COM O NOME DO PRODUTO:\n");
                scanf("%s", &produto[indice]);
                printf("ENTRE COM O VALOR:\n");
                scanf("%f", &valor[indice]);
                printf("ENTRE COM A QUANTIDADE\n");
                scanf("%d", &quantidade[indice]);
                indice++;
                
                printf("PRODUTO CADASTRADO COM SUCESSO\n");
                break;
            case 2:
                printf("LISTA DE PRODUTOS\n");
                for (int i = 0; i < indice; i++) {
                    printf("\nNOME: %s\nVALOR: %.2f\nQUANTIDADE: %d\n",produto[i], valor[i], quantidade[i]);
                }
                break;
            case 3:
                printf("BUSCAR PRODUTO:\n");
                printf("INSIRA O NOME DO PRODUTO QUE QUER BUSCAR:\n");
                scanf("%s", &nomeBusca);
                for (int i = 0; i < indice; i++) {
                    if (strcmp(produto[i], nomeBusca) == 0) {
                        printf("ENCONTRADO\n");
                        printf("\nNOME: %s\nVALOR: %.2f\nQUANTIDADE: %d\n",produto[i], valor[i], quantidade[i]);
                    }
                }
                break;
            case 4:
                printf("VENDER PRODUTO\n");
                printf("INSIRA O NOME DO PRODUTO QUE QUER VENDER:\n");
                scanf("%s", &nomeBusca);
                printf("")
                break;
        }
        printf("\n0 - parar 1 - continuar\n");
        scanf("%d", &continuar);
    }while(continuar != 0);
    
    return 0;
}
