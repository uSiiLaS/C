#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

struct dados_aluno
{
    char nome[250];
    int idade;
    float notas[2];
    float soma;
    float media;
};

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct dados_aluno aluno[3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("%dº Aluno\n", i + 1);
        printf("Informe o seu nome: ");
        gets(aluno[i].nome);

        printf("Informe a sua idade: ");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Informe a %dº nota: ", j + 1);
            scanf("%f", &aluno[i].notas[j]);
            aluno[i].soma += aluno[i].notas[j];
        }
        aluno[i].media = aluno[i].soma / j;
        fflush(stdin);
        printf("\n");
    }

    system("cls || clear");

    printf("Exibindo resultados...\n\n");

    for (i = 0; i < 3; i++)
    {
        printf("%dº Aluno\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Idade: %d\n", aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("%dº nota: %.2f\n", j + 1, aluno[i].notas[j]);
        }
        printf("Média: %.2f\n", aluno[i].media);
        printf("\n");
    }

    return 0;
}