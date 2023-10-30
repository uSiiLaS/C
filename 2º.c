#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <ctype.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char nome[250];
    char sexo;
    int anoNascimento;
    int idade;

    printf("Informe o seu nome: \n");
    gets(nome);

    printf("Informe o seu sexo:(M OU F) \n");
    scanf("%c", &sexo);

    sexo = toupper(sexo);

    printf("Informe o seu ANO de nascimento: \n");
    scanf("%d", &anoNascimento);

    idade = 2023 - anoNascimento;

    system("cls || clear");

    if (idade >= 18)
    {
        printf("Nome: %s\n", nome);
        printf("Sexo: %c\n", sexo);
        printf("Idade: %d\n", idade);
    }
    else
    {
        printf("Não é possível realizar o cadastro, o (a) candidato (a) deve ter 18 anos ou mais.");
    }

    return 0;
}