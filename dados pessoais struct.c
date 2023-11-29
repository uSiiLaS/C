#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

struct dados_pessoais
{
    char nome[250];
    char data_nascimento[250];
    char rg[250];
    char cpf[250];
};

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct dados_pessoais dados[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%dº Pessoa\n", i + 1);
        printf("Digite o seu nome: ");
        gets(dados[i].nome);

        fflush(stdin);

        printf("Informe a sua data de nascimento: ");
        gets(dados[i].data_nascimento);

        fflush(stdin);

        printf("Digite o seu RG: ");
        gets(dados[i].rg);

        fflush(stdin);

        printf("Digite o seu CPF: ");
        gets(dados[i].cpf);

        fflush(stdin);
        printf("\n");
    }

    system("cls || clear");

    for (i = 0; i < 5; i++)
    {
        printf("%dº Pessoa\n", i + 1);
        printf("Nome: %s\n", dados[i].nome);
        printf("Data de nascimento: %s\n", dados[i].data_nascimento);
        printf("RG: %s\n", dados[i].rg);
        printf("CPF: %s\n", dados[i].cpf);
        printf("\n");
    }

    return 0;
}