#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis
    char nome[250];
    int idade;
    float nota1;
    float nota2;
    float nota3;
    float media;

    // Solicitando informações
    fflush(stdin);

    printf("Digite o seu nome: \n");
    gets(nome);

    printf("Informe a sua idade: \n");
    scanf("%d", &idade);

    printf("Informe a sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Informe a sua segunda nota: \n");
    scanf("%f", &nota2);

    printf("Informe a sua terceira nota: \n");
    scanf("%f", &nota3);

    system("cls");

    media = (nota1 + nota2 + nota3) / 3;

    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Média: %.2f \n", media);

    if (media >= 7)
    {
        printf("O aluno está aprovado!");
    }
    else
    {
        printf("O aluno está reprovado!");
    }

    return 0;
}