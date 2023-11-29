#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

struct dados_funcionario
{
    char nome[250];
    char data_admissao[250];
    char matricula[250];
    char endereco[250];
};

struct dados_cliente
{
    char nome[250];
    char data_nascimento[250];
    char endereco[250];
};

int main()
{
    struct dados_funcionario funcionario[3];
    struct dados_cliente cliente[3];
    int i;

    setlocale(LC_ALL, "portuguese");

    for (i = 0; i < 3; i++)
    {
        printf("%dº Funcionario\n", i + 1);
        printf("Informe o seu nome: ");
        gets(funcionario[i].nome);

        fflush(stdin);

        printf("Informe a sua data de admissão: ");
        gets(funcionario[i].data_admissao);

        fflush(stdin);

        printf("Informe a sua matrícula: ");
        gets(funcionario[i].matricula);

        fflush(stdin);

        printf("Informe o seu endereço: ");
        gets(funcionario[i].endereco);

        fflush(stdin);
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        printf("%dº Cliente\n", i + 1);
        printf("Informe o seu nome: ");
        gets(cliente[i].nome);

        fflush(stdin);

        printf("Informe a sua data de nascimento: ");
        gets(cliente[i].data_nascimento);

        fflush(stdin);

        printf("Informe o seu endereço: ");
        gets(cliente[i].endereco);

        fflush(stdin);
        printf("\n");
    }

    system("cls || clear");
    printf("Exibindo dados...\n\n");
    printf("\tFUNCIONÁRIOS\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("%dº Funcionário\n", i + 1);
        printf("Nome: %s\n", funcionario[i].nome);
        printf("Data de admissão: %s\n", funcionario[i].data_admissao);
        printf("Matrícula: %s\n", funcionario[i].matricula);
        printf("Endereço: %s\n", funcionario[i].endereco);
        printf("\n");
    }

    printf("\tCLIENTES\n\n");
    for (i = 0; i < 3; i++)
    {
        printf("%dº Cliente\n", i + 1);
        printf("Nome: %s\n", cliente[i].nome);
        printf("Data de nascimento: %s\n", cliente[i].data_nascimento);
        printf("Endereco: %s\n", cliente[i].endereco);
        printf("\n");
    }
    return 0;
}