#include <stdio.h>
#include <stdlib.h>

#define TAM 2
struct dados_contatos
{
    char nome[200];
    char telefone[500];
    char email[500];
};

void buscarTelefone(struct dados_contatos contatos[], char desejado)
{
    int i;
    for (i = 0; i < TAM; i++)
    {
        if (strcmp(contatos[i].nome, desejado) == 0)
        {
            ("\nTelefone de %s: %s", contatos[i].nome, contatos[i].telefone);
            break;
        }
        else
        {
            ("\nContato nao encontrado.");
        }
    }
}

void limpa()
{
    fflush(stdin);
    system("clear || cls");
}

int main()
{

    struct dados_contatos contatos[TAM];
    char procura[200];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o Nome do contato: ");
        gets(contatos[i].nome);

        printf("Digite o telefone do contato: ");
        gets(contatos[i].telefone);

        printf("Digite o email do contato: ");
        gets(contatos[i].email);
        limpa();
    }

    printf("Digite o nome do usuario que deseja ecnontrar: ");
    gets(procura);
    
    buscarTelefone(contatos[i].nome, procura);
    return 0;
}