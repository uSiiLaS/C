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

    struct dados pessoa;

    printf("Informe o seu nome: ");
    gets(pessoa.nome);

    printf("Informe a sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("Informe o seu peso: ");
    scanf("%f", &pessoa.peso);

    printf("Informe a sua altura: ");
    scanf("%f", &pessoa.altura);

    printf("\nExibindo resultados...\n\n");

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("Peso: %.2f\n", pessoa.peso);
    printf("Altura: %.2f\n", pessoa.altura);

    return 0;
}