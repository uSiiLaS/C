#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

struct dados_funcionario
{
    char nome[250];
    int idade;
    char cpf[250];
};

struct dados_cliente
{
    char nome[250];
    int idade;
    char cpf[250];
};

int main()
{

    struct dados_funcionario funcionario;
    struct dados_cliente cliente;

    setlocale(LC_ALL, "portuguese");

    printf("Funcionário\n");
    printf("Informe o seu nome: ");
    gets(funcionario.nome);

    printf("Informe a sua idade: ");
    scanf("%d", &funcionario.idade);

    fflush(stdin);

    printf("Informe o seu CPF: ");
    gets(funcionario.cpf);

    printf("\nCliente\n");
    printf("Informe o seu nome: ");
    gets(cliente.nome);

    printf("Informe a sua idade: ");
    scanf("%d", &cliente.idade);

    fflush(stdin);

    printf("Informe o seu CPF: ");
    gets(cliente.cpf);

    system("cls || clear");

    printf("Exibindo dados...\n\n");
    printf("Funcionário\n");
    printf("Nome: %s\n", funcionario.nome);

    printf("Idade: %d\n", funcionario.idade);

    printf("CPF: %s\n", funcionario.cpf);

    printf("\nCliente\n");
    printf("Nome: %s\n", cliente.nome);

    printf("Idade: %d\n", cliente.idade);

    printf("CPF: %s\n", cliente.cpf);

    return 0;
}