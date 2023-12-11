#include <stdio.h>
#include <stdlib.h>
#define th 2

struct dados_aluno
{
    char nome[200];
    int nascimento;
    int notas[2];
    float media;
    float soma;
};

float calcularMedia(struct dados_aluno aluno[])
{
    int i, j;
    for (i = 0; i < th; i++)
    {
        for (j = 0; j < 2; j++)
        {
            aluno[i].soma += aluno[i].notas[j];
        }
        aluno[i].media = aluno[i].soma / j;
    }
    return aluno[i].media;
}

void limpa()
{

    fflush(stdin);
    system("cls || clear");
}

int main()
{

    struct dados_aluno alunos[5];
    int i, j;
    float resultado;

    for (i = 0; i < th; i++)
    {
        printf("Digite o nome do %dº aluno: ", i + 1);
        gets(alunos[i].nome);

        printf("Digite a data de nascimento do aluno: ");
        scanf("%d", &alunos[i].nascimento);

        for (j = 0; j < 2; j++)
        {
            printf("Digite as duas notas do aluno: ");
            scanf("%d", &alunos[i].notas[j]);
        }
        limpa();
    }
    calcularMedia(alunos[i].notas[j]);
    resultado = calcularMedia(alunos[i].notas[j]);

    // Resultado:

    printf("\nExibindo Resultado dos alunos: \n");

    for (i = 0; i < th; i++)
    {
        printf("\nNome do aluno: %s", alunos[i].nome);
        printf("\nData de nascimento do aluno: %d", alunos[i].nascimento);
        printf("\nMedia do aluno: %.1f", resultado);
    }

    return 0;
}