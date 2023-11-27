#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct dados
    {
        char nome[5][250];
        int idade[5];
        float peso[5];
        float altura[5];
    };

    struct dados pessoa;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o seu nome: ");
        gets(pessoa.nome[i]);

        printf("Informe a sua idade: ");
        scanf("%d", &pessoa.idade[i]);

        printf("Informe o seu peso: ");
        scanf("%f", &pessoa.peso[i]);

        printf("Informe a sua altura: ");
        scanf("%f", &pessoa.altura[i]);

        fflush(stdin);

        printf("\n");
    }

    system("cls || clear");

    printf("\nExibindo resultados...\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("%dº pessoa\n\n", i + 1);
        printf("Nome: %s\n", pessoa.nome[i]);
        printf("Idade: %d\n", pessoa.idade[i]);
        printf("Peso: %.2f\n", pessoa.peso[i]);
        printf("Altura: %.2f\n\n", pessoa.altura[i]);
    }
    return 0;
}