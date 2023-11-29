#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

struct dados_livro
{
    char nome[250];
    char autor[250];
    char categoria[250];
    float preco;
};

int main()
{

    setlocale(LC_ALL, "portuguese");

    struct dados_livro livro[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("%dº Livro\n", i + 1);
        printf("Informe o nome do livro: ");
        gets(livro[i].nome);

        fflush(stdin);

        printf("Informe o nome do autor desse livro: ");
        gets(livro[i].autor);

        fflush(stdin);

        printf("Informe a categoria desse livro: ");
        gets(livro[i].categoria);

        printf("informe o preço desse livro: ");
        scanf("%f", &livro[i].preco);

        fflush(stdin);
        printf("\n");
    }

    system("cls || clear");

    for (i = 0; i < 3; i++)
    {
        printf("%dº Livro\n", i + 1);
        printf("Nome do livro: %s\n", livro[i].nome);
        printf("Nome do autor: %s\n", livro[i].autor);
        printf("Categoria do livro: %s\n", livro[i].categoria);
        printf("Valor do livro: %.2f R$\n", livro[i].preco);
        printf("\n");
    }

    return 0;
}