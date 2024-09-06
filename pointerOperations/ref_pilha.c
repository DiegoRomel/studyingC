#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 10

typedef struct {
    int data[MAX_STACK_SIZE];
    int top;
} Stack;

void initialize(Stack *stack) {
    stack->top = -1; // Inicializa o topo da pilha
}

int isEmpty(Stack *stack) {
    return stack->top == -1; // Verifica se a pilha está vazia
}

int isFull(Stack *stack) {
    return stack->top == MAX_STACK_SIZE - 1; // Verifica se a pilha está cheia
}

void push(Stack *stack, int value) {
    if (isFull(stack)) {
        printf("A pilha está cheia. Não é possível inserir mais elementos.\n");
    } else {
        stack->data[++stack->top] = value; // Insere um elemento na pilha
    }
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("A pilha está vazia. Não é possível remover elementos.\n");
        return -1; // Valor de retorno de erro
    } else {
        return stack->data[stack->top--]; // Remove e retorna o elemento do topo da pilha
    }
}

int main() {
    Stack stack;
    initialize(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Elementos da pilha:\n");
    while (!isEmpty(&stack)) {
        int value = pop(&stack);
        printf("%d\n", value);
    }

    return 0;
}
