#include <stdio.h>

/* o typedef é usado para redefinir o nome de tipos */
/* importante: o typedef NÃO cria um tipo novo. */


struct Aluno
{
    char nome[20];
    int idade;
    int turma;
};

typedef struct Aluno Aluno; // renomeando a struct para chamar só Aluno, como na linha 38.

int main(void)
{
    /*
    redefinição do tipo float por nota
    */
    typedef float nota;

    /*
    agora é como se nota fosse um apelido para float
    */
    nota num1 = 45.55;

    printf("sua nota: %.2f\n", num1);
    /*
    sua nota: 45.55
    */

    /*
    sendo assim, pode se redefinir o nome de uma struct, pois nomes de structs
    costumam ser longos
    */

   Aluno primeiroAluno;
   primeiroAluno.idade = 15;
   printf("idade do aluno: %d\n", primeiroAluno.idade);

    return 0;
}