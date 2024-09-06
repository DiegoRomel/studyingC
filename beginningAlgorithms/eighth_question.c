/*
Escrever um programa que cadastre o nome, a matrícula e duas notas de vários
alunos. Em seguida imprima a matrícula, o nome e a média de cada um deles.
*/
#include <stdio.h>

struct Aluno
{
    char nome[20];
    int matricula;
    float nota1;
    float nota2;
};

int main(void)
{
    struct Aluno pegar_dados_aluno(struct Aluno aluno);
    void printar_dados(struct Aluno aluno);
    printf("aluno 1: \n");
    struct Aluno aluno1 = pegar_dados_aluno(aluno1);
    printf("aluno 2: \n");
    struct Aluno aluno2 = pegar_dados_aluno(aluno2);
    
    printf("\n\n");

    printf("dados primeiro aluno: \n");
    printar_dados(aluno1);
    printf("dados segundo aluno: \n");
    printar_dados(aluno2);
    return 0;
}

struct Aluno pegar_dados_aluno(struct Aluno aluno)
{   
    printf("insira o nome: \n");
    scanf("%s", aluno.nome);

    printf("insira a matricula: \n");
    scanf("%d", &aluno.matricula);

    printf("insira a primeira nota: \n");
    scanf("%f", &aluno.nota1);

    printf("insira a segunda nota: \n");
    scanf("%f", &aluno.nota2);

    return aluno;
}

void printar_dados(struct Aluno aluno)
{   
    printf("nome: %s\n", aluno.nome);
    printf("matricula: %d\n", aluno.matricula);
    float media = (aluno.nota1 + aluno.nota2) / 2;
    printf("a media do aluno eh: %.2f\n", media);
}