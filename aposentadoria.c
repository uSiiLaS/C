#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char codigo[250];
    int anoNascimento;
    int tempoTrabalho;
    int idade;
    char resultado[250];

    printf("Informe o código do empregado: \n");
    gets(codigo);

    printf("Informe o ANO do nascimento: \n");
    scanf("%d", &anoNascimento);

    printf("Informe o tempo de trabalho: \n");
    scanf("%d", &tempoTrabalho);

    system("cls || clear");

    idade = 2023 - anoNascimento;

    printf("Código do empregado: %s \n", codigo);
    printf("Idade: %d anos \n", idade);
    printf("Tempo de trabalho: %d \n", tempoTrabalho);
    printf("\n");

    if (idade >= 65 || tempoTrabalho >= 30)
    {
        strcpy(resultado, "Requerer aposentadoria! \n");
    }
    else
    {
        strcpy(resultado, "Não requerer aposentadoria! \n");
    }

    printf(resultado);

    return 0;
}