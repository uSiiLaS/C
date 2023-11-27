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
        char nome[250];
        int idade;
        float peso;
        float altura;
    };

    struct dados pessoa[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o seu nome: ");
        gets(pessoa[i].nome);

        printf("Informe a sua idade: ");
        scanf("%d", &pessoa[i].idade);

        printf("Informe o seu peso: ");
        scanf("%f", &pessoa[i].peso);

        printf("Informe a sua altura: ");
        scanf("%f", &pessoa[i].altura);

        fflush(stdin);

        printf("\n");
    }

    system("cls || clear");

    printf("\nExibindo resultados...\n\n");

    for (i = 0; i < 5; i++)
    {
        printf("%dº pessoa\n\n", i + 1);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Idade: %d\n", pessoa[i].idade);
        printf("Peso: %.2f\n", pessoa[i].peso);
        printf("Altura: %.2f\n\n", pessoa[i].altura);
    }
    return 0;
}