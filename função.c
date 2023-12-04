#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

void cabecalho()
{
    printf("\n===========================\n");
    printf("\t SENAI-BA\n");
    printf("===========================\n\n");
}

void limpaTela()
{
    system("cls || clear");
}

int main()
{

    char nome[250];
    int idade;

    cabecalho();

    printf("Digite o seu nome: ");
    gets(nome);

    limpaTela();

    cabecalho();

    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    limpaTela();

    cabecalho();

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

    return 0;
}