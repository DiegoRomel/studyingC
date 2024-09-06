#include <stdio.h>
#include <stdlib.h>

// Definindo a estrutura de um nó da árvore de expressão
struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

// Função para criar um novo nó
struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Função para avaliar a árvore de expressão
int evaluateExpressionTree(struct Node* root) {
    // Se o nó atual for um operando, converte o caractere em um número e retorna
    if (root->data >= '0' && root->data <= '9') {
        return root->data - '0';
    }

    // Caso contrário, o nó atual é um operador, avalia as subárvores esquerda e direita
    int leftValue = evaluateExpressionTree(root->left);
    int rightValue = evaluateExpressionTree(root->right);

    // Realiza a operação com base no operador atual
    switch (root->data) {
        case '+':
            return leftValue + rightValue;
        case '-':
            return leftValue - rightValue;
        case '*':
            return leftValue * rightValue;
        case '/':
            return leftValue / rightValue;
        default:
            printf("Operador inválido: %c\n", root->data);
            return 0;
    }
}

int main() {
    // Construindo a árvore de expressão (3 + 5) * 2
    struct Node* root = createNode('*');
    root->left = createNode('+');
    root->right = createNode('2');
    root->left->left = createNode('3');
    root->left->right = createNode('5');

    // Avaliando a expressão
    int result = evaluateExpressionTree(root);

    printf("Resultado da expressão (3 + 5) * 2 = %d\n", result);

    return 0;
}
