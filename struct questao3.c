#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct aluno
    {
        char nome[250];
        int idade;
        float nota[2];
        float media;
        float soma;
        char resultado[250];
    };

    struct aluno pessoa[3];
    int i, j;

    for (j = 0; j < 3; j++)
    {
        printf("Informe o seu nome: ");
        gets(pessoa[j].nome);

        printf("Informe a sua idade: ");
        scanf("%d", &pessoa[j].idade);

        for (i = 0; i < 2; i++)
        {
            printf("Informe a %dº nota: ", i + 1);
            scanf("%f", &pessoa[j].nota[i]);
            pessoa[j].soma += pessoa[j].nota[i];
        }

        pessoa[j].media = pessoa[j].soma / i;
        fflush(stdin);
        printf("\n");
        pessoa[j].soma = 0;
    }
    system("cls || clear");

    printf("Exibindo resultados...\n\n");

    for (j = 0; j < 3; j++)
    {
        if (pessoa[j].media >= 7)
        {
            strcpy(pessoa[j].resultado, "Aprovado!");
        }
        else if (pessoa[j].media >= 5)
        {
            strcpy(pessoa[j].resultado, "Recuperação!");
        }
        else
        {
            strcpy(pessoa[j].resultado, "Reprovado!");
        }

        printf("%dº pessoa\n", j + 1);
        printf("Nome: %s\n", pessoa[j].nome);
        printf("Idade: %d\n", pessoa[j].idade);

        for (i = 0; i < 2; i++)
        {
            printf("%dº nota: %.2f\n", i + 1, pessoa[j].nota[i]);
        }

        printf("\nMédia de %s: %.2f\n", pessoa[j].nome, pessoa[j].media);
        printf("%s\n", pessoa[j].resultado);
        printf("\n");
    }
    return 0;
}