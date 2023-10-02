#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char nome[250];
    int idade;

    printf("Digite seu nome: \n");
    gets(nome); 

    printf("Informe a sua idade: \n");
    scanf("%d", &idade);

    system("cls || clear");

    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);

    if (idade < 18 || idade > 65)
    {
        printf("Não há obrigação de voto!");
    }
    else
    {
        printf("Há obrigação de voto!");
    }

    return 0;
}