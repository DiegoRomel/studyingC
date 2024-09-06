//
//  main.c
//  dataStructureQueue
//
//  Created by Diego Rômel Perna Souza on 04/09/24.
//

#include <stdio.h>

void addItem(int queue[], int *index);
void removeItem(int queue[], int *index);
void printQueue(int queue[]);

int main(int argc, const char * argv[]) {
    int queue[10] = {0};
    int *pQueue = &queue[0];
    int index = 0;
    int *pindex = &index;
    int controle;
    int running = 1;
    
    do {
        printf("1 - add item\n2 - remove item\n3 - print queue\n");
        scanf("%i", &controle);
        
        switch(controle) {
            case 1:
                addItem(pQueue, &index);
                break;
            case 2:
                removeItem(pQueue, &index);
                break;
            case 3:
                printQueue(queue);
                break;
            default:
                printf("invalid\n");
                break;
        }
        printf("1 - continue\n2 - stop\n");
        scanf("%i", &running);
    } while(running != 2);
    printf("final index: %i\n", *pindex);
    
    return 0;
}

void addItem(int queue[], int *pindex) {
    printf("adding item\n");
    int num = 233;
    printf("add item: \n");
    scanf("%i", &num);
    queue[*pindex] = num;
    *pindex += 1;
}


void removeItem(int queue[], int *pindex) {
    printf("removing item\n");
    *pindex -= 1;
    queue[*pindex] = 0;
}


void printQueue(int queue[]) {
    printf("printing queue\n");
    for (int i = 0; i < 10; i++) {
        printf("%i\n", queue[i]);
    }
}
