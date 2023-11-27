#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct ficha_aluno
    {
        char nome[2][200];
        int idade[2];
    };

    int i;

    struct ficha_aluno aluno;

    for (i = 0; i < 2; i++)
    {
        printf("Digite o nome do aluno: ");
        gets(aluno.nome[i]);

        printf("Digite a idade do aluno: ");
        scanf("%d", &aluno.idade[i]);

        printf("\n");

        fflush(stdin);
    }

    printf("\nExibindo resultados...\n");

    for (i = 0; i < 2; i++)
    {
        printf("Nome do aluno: %s\n", aluno.nome[i]);
        printf("Idade do aluno: %d\n", aluno.idade[i]);
    }
    
    return 0;
}